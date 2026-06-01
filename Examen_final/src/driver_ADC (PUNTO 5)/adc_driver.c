#include"adc_dirver.h"
#include "esp_adc/adc_oneshot.h"
#include "esp_adc/adc_cali.h"

#define ADC_CANAL ADC_CHANNEL_6

static adc_oneshot_unit_handle_t
static adc_cali_handle_t


void adc_driver_init(void{
    adc_oneshot_unit_init_cfg_t = {.unit_id = ADC_UNIT_1}
    adc_oneshot_new_unit(&unit_cfg, &adc1_handle);

    adc_oneshot_chan_cfgt chan_cfg{
        .bitwidth = ADC_BITWIDTH_DEFAULT,
        .atten = ADC_ATTEN_DB_12
    };

    adc_oneshot_config_channel(adc1_handle, ADC_CANAL, &chan_cfg);

    adc_cali_line_fitting_config_t cali_cfg = {
        .unit_id = ADC_UNIT_1,
        .atten = ADC_ATTEN_DB_12,
        .bitwidth = ADC_BITWIDTH_DEFAULT
    };
    adc_cali_create_scheme_line_fitting(&cali_cfg, &adc1_cali_handle)
}