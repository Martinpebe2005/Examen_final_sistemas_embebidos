void mcp_set_wiper(N, uint8_t register, uint8_t val){
    uint8_t reg = mcp4132_read_register(register, val) //aqui leeriamos lo que necesitamos
    uint8_t N = N & 0x7F;
    mcp4132_write_register(reg, N);
}