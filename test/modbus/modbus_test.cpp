#include "gtest/gtest.h"

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

TEST(ModbusTest, FirstTest)
{
    FAIL() << "Implement your test!";
}

}


