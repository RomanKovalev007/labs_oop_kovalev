#include <gtest/gtest.h>
#include "../include/pure_num.h"

//положительные чистые числа
TEST(PureNumTest, PosPureNum) {
    EXPECT_TRUE(PureNum(0));
    EXPECT_TRUE(PureNum(5));
    EXPECT_TRUE(PureNum(111));
    EXPECT_TRUE(PureNum(112233));
    EXPECT_TRUE(PureNum(123456789));
}

//положительные не чистые числа
TEST(PureNumTest, PosNotPureNum) {
    EXPECT_FALSE(PureNum(10));
    EXPECT_FALSE(PureNum(321));
    EXPECT_FALSE(PureNum(4000));
    EXPECT_FALSE(PureNum(131));
    EXPECT_FALSE(PureNum(918273645));
}

//отрицательные числа
TEST(PureNumTest, NegNum) {
    EXPECT_FALSE(PureNum(-1));
    EXPECT_FALSE(PureNum(-123));
    EXPECT_FALSE(PureNum(-321));
    EXPECT_FALSE(PureNum(-112233));
    EXPECT_FALSE(PureNum(-11000));
}