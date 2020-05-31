#include "gtest/gtest.h"

TEST(UNIT_TESTING,FIRST_TEST)
{
    EXPECT_EQ(2,2);
}
int main(int argc,char* argv)
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}