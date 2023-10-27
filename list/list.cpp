//
// Created by cissy on 2023/10/21.
//

#include "list.h"
#include <gtest/gtest.h>

int list::f(int x) {
    return x+2;
}

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
// Expect two strings not to be equal.
EXPECT_STRNE("hello", "world");
// Expect equality.
EXPECT_EQ(7 * 6, 42);
}
