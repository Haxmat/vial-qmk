CUSTOM_MATRIX = lite

SRC += matrix.c ec_analog.c ec_switch_matrix.c

CONSOLE_ENABLED = yes
SERIAL_DRIVER = usart

MCU = STM32F411
BOOTLOADER = tinyuf2

