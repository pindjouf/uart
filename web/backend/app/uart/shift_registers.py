def sipo(register, new_bit):
    register = (register << 1) & 0xFF
    register = register | new_bit

    return register

def piso(register, new_bit):
    register = (register >> 1) & 0xFF
    register = new_bit | register

    return register
