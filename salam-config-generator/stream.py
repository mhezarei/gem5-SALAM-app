class Stream:
    def __init__(self, name, width=0, size=0):
        self.name: str = name
        self.width: int = width
        self.size: int = size
        self.input = None
        self.output = None

    def set_input_operation(self, op):
        self.input = op

    def set_output_operation(self, op):
        self.output = op

    def __str__(self) -> str:
        return (
            f"Stream {self.name}: "
            + f"From {None if not self.input else self.input.get_name()} "
            + f"To {None if not self.output else self.output.get_name()}; "
            + f"width={self.width}B size={self.size}B"
        )