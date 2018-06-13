#include "../application/lib.h"
#include "gtest/gtest.h"

TEST(case1, test1)
{
	EXPECT_EQ(123, func(11));
}

TEST(case1, test2)
{
	EXPECT_EQ(123, func(12));
}

TEST(case1, test3)
{
	EXPECT_EQ(123, func(13));
}