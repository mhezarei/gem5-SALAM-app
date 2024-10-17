from typing import List
from stream import Stream


# TODO: automate this
FIELD_NAMES = ["timestamp", "uid", "age", "sid"]


class Operation:
    def __init__(self):
        self.name: str
        self.acc_name: str
        self.input_streams: List[Stream] = []
        self.output_streams: List[Stream] = []

    def generate_acc_code():
        pass

    def add_input_stream(self, inp_stream):
        self.input_streams.append(inp_stream)

    def add_output_stream(self, out_stream):
        self.output_streams.append(out_stream)

    def get_name(self) -> str:
        return self.name

    def __str__(self) -> str:
        assert self.name, "Operations still doesn't have a name"
        return f"Template Operation {self.name}"


class Filter(Operation):
    def __init__(self, predicate):
        super().__init__()

        self.name = "filter"
        self.predicate: str = predicate
        self.parse_predicate()

    def parse_predicate(self):
        possible_operations = ["<", ">", "<=", ">=", "==", "!="]
        operation = [op for op in possible_operations if op in self.predicate][-1]
        op_idx = self.predicate.index(operation)
        field_name = self.predicate[:op_idx]
        value = self.predicate[op_idx + len(operation) :]

    def generate_acc_code(self):
        mapping = {
            "data_type": "DOUBLE",
            "init_record": "(DATA_TYPE)-1," * len(FIELD_NAMES),
            "field_1": FIELD_NAMES[0],
            "field_2": FIELD_NAMES[1],
            "field_3": FIELD_NAMES[2],
            "field_4": FIELD_NAMES[3],
            "predicate": "r." + self.predicate,
        }

        with open(f"template/{self.name}.c", "r") as template:
            lines = template.readlines()

        with open(f"output/{self.name}.c", "w") as f:
            for l in lines:
                print(l.format(**mapping), end="", file=f)

    def __str__(self) -> str:
        return (
            f"Operation {self.name}\n"
            + f"\tInput {self.input_streams[0].name}\n"
            + f"\tOutput {self.output_streams[0].name}\n"
            + f"\tPredicate {self.predicate}"
        )


class Map(Operation):
    def __init__(self, predicate):
        super().__init__()

        self.name = "map"
        self.predicate: str = predicate
        self.parse_predicate()

    def generate_acc_code(self):
        mapping = {
            "data_type": "DOUBLE",
            "init_record": "(DATA_TYPE)-1," * len(FIELD_NAMES),
            "field_1": FIELD_NAMES[0],
            "field_2": FIELD_NAMES[1],
            "field_3": FIELD_NAMES[2],
            "field_4": FIELD_NAMES[3],
            "predicate": "r." + self.predicate,
        }

        with open(f"template/{self.name}.c", "r") as template:
            lines = template.readlines()

        with open(f"output/{self.name}.c", "w") as f:
            for l in lines:
                print(l.format(**mapping), end="", file=f)

    def parse_predicate(self):
        possible_operations = ["+", "-", "/", "*", "**", "%", "//"]
        operation = [op for op in possible_operations if op in self.predicate][-1]
        op_idx = self.predicate.index(operation)
        field_name = self.predicate[:op_idx]
        value = self.predicate[op_idx + len(operation) :]

    def __str__(self) -> str:
        return (
            f"Operation {self.name}\n"
            + f"\tInput {self.input_streams[0].name}\n"
            + f"\tOutput {self.output_streams[0].name}\n"
            + f"\tPredicate {self.predicate}"
        )


class Branch(Operation):
    def __init__(self, predicates):
        super().__init__()

        self.name = "branch"
        self.predicates: List[str] = predicates
        self.parse_predicates()

    def parse_predicates(self):
        pass

    def generate_acc_code(self):
        out_streams = [f"stream_to_{i}" for i in range(len(self.output_streams))]
        mapping = {
            "data_type": "DOUBLE",
            "out_streams": ", ".join([f"ADDR {s}" for s in out_streams]),
            "init_record": ",".join(["(DATA_TYPE)-1" for _ in range(len(FIELD_NAMES))]),
            "field_1": FIELD_NAMES[0],
            "field_2": FIELD_NAMES[1],
            "field_3": FIELD_NAMES[2],
            "field_4": FIELD_NAMES[3],
            "out_stream_logic": f"{self.predicates[0]} ? {out_streams[0]} : {self.predicates[1]} ? {out_streams[1]} : {out_streams[2]}",
        }

        with open(f"template/{self.name}.c", "r") as template:
            lines = template.readlines()

        with open(f"output/{self.name}.c", "w") as f:
            for l in lines:
                print(l.format(**mapping), end="", file=f)

    def __str__(self) -> str:
        return (
            f"Operation {self.name}\n"
            + f"\tInput {self.input_streams[0].name}\n"
            + f"\tOutputs {[s.name for s in self.output_streams]}\n"
            + f"\tPredicates {self.predicates}"
        )


class Merge(Operation):
    def __init__(self):
        super().__init__()

        self.name = "merge"

    def generate_acc_code(self):
        num_input_streams = len(self.input_streams)
        in_streams = [f"stream_to_{i}" for i in range(num_input_streams)]
        mapping = {
            "data_type": "DOUBLE",
            "in_streams": ", ".join([f"ADDR {s}" for s in in_streams]),
            "num_input_streams": num_input_streams,
            "init_record": ",".join(["(DATA_TYPE)-1" for _ in range(len(FIELD_NAMES))]),
            "field_1": FIELD_NAMES[0],
            "field_2": FIELD_NAMES[1],
            "field_3": FIELD_NAMES[2],
            "field_4": FIELD_NAMES[3],
            "in_stream_logic": f"i%{num_input_streams}==0 ? {in_streams[0]} : "
            + f"i%{num_input_streams}==1 ? {in_streams[1]} : {in_streams[2]}",
        }

        with open(f"template/{self.name}.c", "r") as template:
            lines = template.readlines()

        with open(f"output/{self.name}.c", "w") as f:
            for l in lines:
                print(l.format(**mapping), end="", file=f)

    def __str__(self) -> str:
        return (
            f"Operation {self.name}\n"
            + f"\tInputs {[s.name for s in self.input_streams]}\n"
            + f"\tOutput {self.output_streams[0].name}"
        )


class ToTable(Operation):
    def __init__(self):
        super().__init__()

        self.name = "to_table"

    def generate_acc_code(self):
        mapping = {
            "data_type": "DOUBLE",
            "init_record": ",".join(["(DATA_TYPE)-1" for _ in range(len(FIELD_NAMES))]),
            "field_1": FIELD_NAMES[0],
            "field_2": FIELD_NAMES[1],
            "field_3": FIELD_NAMES[2],
            "field_4": FIELD_NAMES[3],
        }

        with open(f"template/{self.name}.c", "r") as template:
            lines = template.readlines()

        with open(f"output/{self.name}.c", "w") as f:
            for l in lines:
                print(l.format(**mapping), end="", file=f)

    def __str__(self) -> str:
        return f"Operation {self.name}\n" + f"\tInput {self.input_streams[0].name}"
