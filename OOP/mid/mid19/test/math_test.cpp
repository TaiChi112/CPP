#include <gtest/gtest.h>
#include "math.h"

// Test case for the add function
TEST(MathTest, AddTest) {
    EXPECT_EQ(add(2, 3), 5);  // 2 + 3 = 5
    EXPECT_EQ(add(-1, 1), 0); // -1 + 1 = 0
    EXPECT_EQ(add(0, 0), 0);  // 0 + 0 = 0
}

// Test case for the subtract function
TEST(MathTest, SubtractTest) {
    EXPECT_EQ(subtract(5, 3), 2);  // 5 - 3 = 2
    EXPECT_EQ(subtract(10, 7), 3); // 10 - 7 = 3
    EXPECT_EQ(subtract(0, 0), 0);  // 0 - 0 = 0
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}