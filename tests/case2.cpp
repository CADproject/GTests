#include "../application/lib.h"
#include "gtest/gtest.h"

TEST(case2, test1)
{
	EXPECT_EQ(123, func(21));
}

TEST(case2, test2)
{
	EXPECT_EQ(123, func(22));
}

TEST(case2, test3)
{
	EXPECT_EQ(123, func(23));
}