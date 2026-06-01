uart_driver_init()
adc_driver_init()
timer_init()

float sensor_read(){
    if (V>1.4){
        N=95
    }
    else if (V<0.9){
        N=42
    }

    float whipper_set_value(N)

    return whipper_set_value
}

void app_main() {
while(1){
    if(timer_tiempo_ha_pasado(last_time, TIMER_PERIOD){
        geofono = sensor_read();
        uart_driver_send(geofono);
    }
}
}