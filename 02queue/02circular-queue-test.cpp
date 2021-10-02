# include <gtest/gtest.h>

# include "02circular-queue.h"

# include "02circular-queue.cpp"

using namespace std;

TEST(MyTestSuitName, MyTestCaseName) {

    CircularQueue obj(3);

    EXPECT_EQ(-1, obj.dequeue()) << "Dequeue operation on empty queue should return -1";

    EXPECT_EQ(true, obj.enqueue(10)) << "Enqueue operation should succeed on spacious queue";

    EXPECT_EQ(true, obj.enqueue(20)) << "Enqueue operation should succeed on spacious queue";

    EXPECT_EQ(true, obj.enqueue(30)) << "Enqueue operation should succeed on spacious queue";

    EXPECT_EQ(false, obj.enqueue(40)) << "Enqueue operation should fail on fulled queue";

    EXPECT_NE(-1, obj.dequeue()) << "Dequeue operation should pass on non empty queue";

    EXPECT_EQ(true, obj.enqueue(40)) << "Enqueue operation should succeed on spacious queue";

    EXPECT_EQ(false, obj.enqueue(50)) << "Enqueue operation should fail on fulled queue";

    EXPECT_NE(-1, obj.dequeue()) << "Dequeue operation should pass on non empty queue";

    EXPECT_EQ(true, obj.enqueue(50)) << "Enqueue operation should succeed on spacious queue";

    obj.display();

}