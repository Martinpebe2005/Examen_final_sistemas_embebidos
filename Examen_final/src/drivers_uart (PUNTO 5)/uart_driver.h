#ifndef UART_DRIVER_H
#include "driver_spi/uart.h"

#define UART_PORT UART_NUM_0
#define UART_BUF_SIZE 1024

void uart_driver_init();
void uart_driver_send(float whiper);

#endif