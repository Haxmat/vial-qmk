CUSTOM_MATRIX = lite

SRC += matrix.c ec_analog.c ec_switch_matrix.c
DEFAULT_FOLDER = haxmat/ortho34ec/rev0

CONSOLE_ENABLED = yes
COMBO_ENABLE = yes
MOUSEKEY_ENABLED = yes
BOOTLOADER = tinyuf2
MCU = STM32F411
DEFERRED_EXEC_ENABLE = yes
