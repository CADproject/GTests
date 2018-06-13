#include "../application/lib.h"
#include "gtest/gtest.h"

TEST(case3, test1)
{
	EXPECT_EQ(123, func(31));
}

TEST(case3, test2)
{
	EXPECT_EQ(123, func(32));
}

TEST(case3, test3)
{
	EXPECT_EQ(123, func(33));
}