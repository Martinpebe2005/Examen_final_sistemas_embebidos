#include "spi_driver.h"
#define PIN_MOSI
#define PIN_MISO
#define PIN_CLK
#define PIN_CS
static spi_device_handle_t spi_device;

void spi_bus_init(void){
    spi_bus_config_t bus{
        .mosi_io num = PIN_MOSI,
        .miso_io_num = PIN_MISO,
        .sclk_io_num = PIN_CLK.
        quadwp_io_num = -1,
        quadh_io_num = -1,
    };
    spi_bus_initialize(SPI2_HOST, &bus, SPI_DMA_CH_AUTO);

    spi_device_interface_config_t dev = {
        .clock_speed_hz = 1000000,
        .mode = 3,
        .spics_io_num = PIN_CS,
        .queue_size = 1,
    };
    spi_bus_add_device(SPI2_HOST, &dev, &spi_device);
}

void mcp4132_write_register(uint8_t regs, uint8_t address){
    uint8_t buf[2] = {reg, address};
    spi_transaction_t t = {.length = 16, .tx_buffer = buf}
    spi_device_transmit(spi_device, &t)
}

uint8_t mcp4132_read_register(uint8_t register, uint8_t val){
    uint8_t buf[2] = {register, val};
    spi_transaction_t t = {.length = 16, .tx_buffer = buf}
    spi_device_transmit(spi_master, &t)

    return val
}