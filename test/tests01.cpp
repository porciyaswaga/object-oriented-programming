#include <gtest/gtest.h>
#include "../include/changer.h"

TEST(test_default, basic_test_set){

    ASSERT_TRUE(changer("Vader said: No, I am your father!", 2, 'a', 'o') == "Vader soid: No, I am your fother!");
}

TEST(test_large_range, basic_test_set){

    ASSERT_TRUE(changer("Nihao", 9, 'a', 'o') == "Nihao");
}

TEST(test_minus, basic_test_set){

    ASSERT_TRUE(changer("Nihao", -1, 'a', 'o') == "Nihao");
}

TEST(test_zero, basic_test_set){

    ASSERT_TRUE(changer("Nihao", 0, 'a', 'o') == "Nihao");
}

TEST(test_empry, basic_test_set){

    ASSERT_TRUE(changer("", 2, 'a', 'o') == "");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
