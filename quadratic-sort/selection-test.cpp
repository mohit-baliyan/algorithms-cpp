# include <gtest/gtest.h>
# include "selection.h"
# include "selection.cpp"

using namespace std;

TEST(MyTestSuitName, MyTestCaseName) {

    Selection obj;

    int list[] = {3, 0, 2, 6, 7, 5};
    int expected[] = {0, 2, 3, 5, 6, 7};

    int size = sizeof(list) / sizeof(list[0]);
    obj.sort(list, size);
    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], list[i]) << "Element at index this index is incorrectly positioned";
    }


}
