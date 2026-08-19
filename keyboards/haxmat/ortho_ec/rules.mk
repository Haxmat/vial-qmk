CUSTOM_MATRIX = lite

SRC += matrix.c ec_switch_matrix.c

CONSOLE_ENABLED = yes

SERIAL_DRIVER = bitbang
BOOTLOADER = caterina

ANALOG_DRIVER_REQUIRED = yes
