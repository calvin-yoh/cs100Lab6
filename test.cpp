#include "gtest/gtest.h"
#include "op.hpp"
#include "base.hpp"

#include "Mult.hpp"
#include "Sub.hpp"
#include "Pow.hpp"
#include "Add.hpp"
#include "Div.hpp"
#include "ceiling.hpp"

TEST(CeilTest, CeilEvaluate)
{
        Op* val1 = new Op(7.5);
	Ceiling* test = new Ceiling(val1);
        EXPECT_EQ(test->change(), 8);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
