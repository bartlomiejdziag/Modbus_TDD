#include "gtest/gtest.h"

extern "C"
{
    #include "modbus.h"
}

using testing::Test;

namespace {

class ModbusTest : public testing::Test
{
    protected:

    void SetUp() override
    {

    }

    void TearDown() override
    {

    }

};

TEST(ModbusTest, ReadSingleHReg)
{
    modbus_addr_t addr = 0x0001;
    modbus_len_t len = -1;

    modbus_master_read_hreg(addr, len);

    //no idea how to assert yet
    FAIL() << "Implement your test!";
}

}


