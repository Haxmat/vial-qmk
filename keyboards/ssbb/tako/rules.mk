CUSTOM_MATRIX = lite

SRC += matrix.c ec_analog.c ec_switch_matrix.c
DEFAULT_FOLDER = ssbb/tako/rev1

CONSOLE_ENABLED = yes
PLATFORM = CHIBIOS
MCU = STM32F411
BOOTLOADER = tinyuf2
SERIAL_DRIVER = usart
STMC_US=yes