#include <stdint.h>

enum modbus_func_code
{
    MODBUS_FUNCODE_READ_COILS = 0x01,
    MODBUS_FUNCODE_READ_DIN = 0x02,
    MODBUS_FUNCODE_READ_HREQ = 0x03,
    MODBUS_FUNCODE_READ_INREG = 0x04,
    MODBUS_FUNCODE_WRITE_SINGLE_COIL = 0x05,
    MODBUS_FUNCODE_WRITE_SINGLE_HREG = 0x06,
    MODBUS_FUNCODE_WRITE_MULTI_COILS = 0x0F,
    MODBUS_FUNCODE_WRITE_MULTI_HREGS = 0x10,

    MODBUS_FUNCODE_ERR_OFFSET = 0x80,
};

struct modbus_read_req
{
    uint8_t funcode;
    uint16_t start_addr;
    uint16_t bytecnt;
};

struct modbus_read_resp
{
    uint8_t funcode;
    uint16_t bytecnt;
    uint8_t data[];
};

struct modbus_read_err
{
    uint8_t funcode;
    uint16_t expection_code;
};