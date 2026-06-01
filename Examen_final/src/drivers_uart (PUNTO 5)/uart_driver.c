#include "uart_driver.h"

#define UART_BAAUD_RATE 115200

void uart_driver_init(void){
    uart_config_t cfg ={
        .baud_rate = UART_BAAUD_RATE,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .source_clk = UART_SCLK,DEFAULT,
    };
    uart_param_config(UART_PORT, &cfg)
    uart_set_pin(UART_PORT, 
        UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE,
        UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
    uart_driver_install(UART_PORT, UART_BUF_SIZE, UART_BUF_SIZE, 0, NULL, 0);
}

void uart_driver_send(float whiper){
    char msg[64];
    sprintf(msg, "Val_wiper: %.2f \n", whiper)
    uart_write_bytes(UART_PORT, msg, strlen(msg))
}

