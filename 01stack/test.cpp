#include <gtest/gtest.h>

TEST( MyTestSuitName, MyTestCaseName ) {

    int actual = 1;

    EXPECT_GT( actual, 2 );

    EXPECT_EQ(1, actual ) << "Should be equal to one";

}