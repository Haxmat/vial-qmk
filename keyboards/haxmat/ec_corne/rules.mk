CUSTOM_MATRIX = lite

SRC += matrix.c ec_analog.c ec_switch_matrix.c

CONSOLE_ENABLED = yes

ifeq ($(strip $(MCU_FAMILY)),RP)
	SERIAL_DRIVER = vendor
else ifeq ($(strip $(MCU_FAMILY)),STM32)
	SERIAL_DRIVER = usart
endif

