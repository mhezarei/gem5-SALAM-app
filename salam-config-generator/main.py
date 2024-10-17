from pprint import pprint
from typing import List
from operations import *
from stream import Stream


ALGO_FILENAME = "algo.txt"
operations: List[Operation] = []
streams: List[Stream] = []


class DataSource:
    pass


def read_algo_file():
    lines = []
    with open(ALGO_FILENAME, "r") as f:
        lines = [
            l.rstrip()
            for l in f.readlines()
            if not l.startswith("# ") and not l.isspace()
        ]
    return lines


def process_one_instruction(inst: str):
    # TODO: need a lexer
    inst = inst.replace("(", " ").replace(")", " ")
    words = list(map(lambda s: s.rstrip(","), inst.split()))

    assignment_idx = words.index("=")
    assert assignment_idx >= 0, "statement does not have equal sign"

    lhs, rhs = words[:assignment_idx], words[assignment_idx + 1 :]

    # process right hand side
    operation_name = rhs[0]
    op = None
    if operation_name == "Reader":
        op = Reader(rhs[1].replace('"', ""))
    elif operation_name == "filter":
        predicate = rhs[2]
        op = Filter(predicate)

        # set the op's input streams
        inp_stream_name = rhs[1]
        corresponding_inp_streams = [s for s in streams if s.name == inp_stream_name]
        assert corresponding_inp_streams, f"Undefined stream {inp_stream_name}"
        assert len(corresponding_inp_streams) == 1, "Filter has more than one input"
        for inps in corresponding_inp_streams:
            op.add_input_stream(inps)
            inps.set_output_operation(op)
    elif operation_name == "map":
        predicate = rhs[2]
        op = Map(predicate)

        # set the op's input streams
        inp_stream_name = rhs[1]
        corresponding_inp_streams = [s for s in streams if s.name == inp_stream_name]
        assert corresponding_inp_streams, f"Undefined stream {inp_stream_name}"
        assert len(corresponding_inp_streams) == 1, "Map has more than one input"
        for inps in corresponding_inp_streams:
            op.add_input_stream(inps)
            inps.set_output_operation(op)
    elif operation_name == "branch":
        predicates = rhs[2:]
        op = Branch(predicates)

        # set the op's input streams
        inp_stream_name = rhs[1]
        corresponding_inp_streams = [s for s in streams if s.name == inp_stream_name]
        assert corresponding_inp_streams, f"Undefined stream {inp_stream_name}"
        assert len(corresponding_inp_streams) == 1, "Branch has more than one input"
        for inps in corresponding_inp_streams:
            op.add_input_stream(inps)
            inps.set_output_operation(op)
    elif operation_name == "merge":
        op = Merge()

        # set the op's input streams
        inp_stream_names = rhs[1:]
        corresponding_inp_streams = [s for s in streams if s.name in inp_stream_names]
        assert corresponding_inp_streams, f"Undefined stream {inp_stream_name}"
        for inps in corresponding_inp_streams:
            op.add_input_stream(inps)
            inps.set_output_operation(op)
    elif operation_name == "to_table":
        op = ToTable()

        # set the op's input streams
        inp_stream_name = rhs[1]
        corresponding_inp_streams = [s for s in streams if s.name == inp_stream_name]
        assert corresponding_inp_streams, f"Undefined stream {inp_stream_name}"
        assert len(corresponding_inp_streams) == 1, "ToTable has more than one input"
        for inps in corresponding_inp_streams:
            op.add_input_stream(inps)
            inps.set_output_operation(op)
    else:
        print("Unidentified function name!")
        exit(1)

    operations.append(op)

    # process left hand side
    if lhs[0] == "Stream":
        # TODO: check for duplicate stream names
        stream_names = lhs[1:]
        for sn in stream_names:
            s = Stream(sn, 8, 80)
            s.set_input_operation(op)
            op.add_output_stream(s)
            streams.append(s)


def generate_config():
    mapping = {
        "app_name": "stateless",
        "accelerators": "",
        "accelerator_names": "",
    }

    for op in operations:
        inputs: List[Stream] = [s for s in streams if op.name == s.input.get_name()]
        mapping[
            "accelerators"
        ] += f"""  - Accelerator:
    - Name: {op.name}
      IrPath: hw/{op.name}.ll
      ConfigPath: hw/{op.name}.ini
      PIOSize: 4096
      PIOMaster: LocalBus
      LocalSlaves: LocalBus
      Debug: False
"""
        for si in inputs:
            mapping[
                "accelerators"
            ] += f"""    - Var:
      - Name: STREAM_{si.name.upper()}
        Type: Stream
        StreamSize: {si.width}
        BufferSize: {si.size}
        InCon: {si.input.get_name()}
        OutCon: {si.output.get_name()}
        ports: 10
"""
        mapping[
            "accelerators"
        ] += """  
"""

        mapping[
            "accelerator_names"
        ] += f"""  {op.name}:
"""

    with open("template/config.yml", "r") as f:
        lines = f.readlines()

    with open("output/config.yml", "w") as f:
        for l in lines:
            print(l.format(**mapping), end="", file=f)


def process_algo(statements: List[str]):
    for inst in statements:
        process_one_instruction(inst)

    for s in streams:
        print(s)
    for op in operations:
        print(op)

    print("=================================================================")

    for op in operations:
        op.generate_acc_code()

    generate_config()


def main():
    algo = read_algo_file()
    process_algo(algo)


if __name__ == "__main__":
    main()
