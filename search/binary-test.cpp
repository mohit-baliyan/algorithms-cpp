#include <gtest/gtest.h>
#include "binary.cpp"
#include "binary.h"

using namespace std;

TEST(MyTestSuitName, MyTestCaseName) {

    BinarySearch obj;

    int list[] = {1, 3, 4, 6, 7, 8};

    int size = sizeof(list) / sizeof(list[0]);

    ASSERT_EQ(0, obj.search(list, size, 1)) << "Should return the index of searched item";
    ASSERT_EQ(1, obj.search(list, size, 3)) << "Should return the index of searched item";
    ASSERT_EQ(2, obj.search(list, size, 4)) << "Should return the index of searched item";
    ASSERT_EQ(3, obj.search(list, size, 6)) << "Should return the index of searched item";
    ASSERT_EQ(4, obj.search(list, size, 7)) << "Should return the index of searched item";
    ASSERT_EQ(5, obj.search(list, size, 8)) << "Should return the index of searched item";

    ASSERT_EQ(-1, obj.search(list, size, 11)) << "Should return the -1 because item is not in the list";

}


