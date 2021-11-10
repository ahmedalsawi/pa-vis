
class SupplyNet:
    def __init__(self) -> None:
        self.name = ""
        self.domain = None

class SupplyPort:
    def __init__(self) -> None:
        self.name = ""
        self.domain = None
        self.direction = "IN"

class PowerDomain:
    def __init__(self) -> None:
        self.name = ""
        self.elements = []
        self.scope = None
        self.include_scope = False

class Upf:
    def __init__(self) -> None:
        self.scope  = None
