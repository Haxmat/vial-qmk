#pragma once

#define CONSOLE_ENABLED

#define STM32_HSECLK 8000000U

#define MATRIX_ROW_PINS \
    { A15, B3, B4, A7 }
#define MATRIX_ROW_PINS_RIGHT \
    { B10, B2, B0, A6 }

#define MATRIX_COL_CHANNELS \
    { 4, 6, 2, 1, 3 }
#define MATRIX_COL_CHANNELS_RIGHT \
    { 2, 4, 6, 7, 5 }

#define MUX_SEL_PINS \
    { B10, B2, B0 }
#define MUX_SEL_PINS_RIGHT \
    { B9, B8, B5 }

#define APLEX_EN_PIN A4
#define APLEX_EN_PIN_RIGHT A15

#define DISCHARGE_PIN A6
#define DISCHARGE_PIN_RIGHT B4

#define ANALOG_PORT B1 

#define SPLIT_HAND_PIN A3 


#define SERIAL_DRIVER usart
#define SERIAL_USART_TX_PIN A2
#define SERIAL_USART_DRIVER SD2
#define SERIAL_USART_HALF_DUPLEX

#define POWER_PIN A5
#define POWER_PIN_RIGHT B3
