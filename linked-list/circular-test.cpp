#include <gtest/gtest.h>

#include "circular.h"
#include "circular.cpp"

using namespace std;

TEST(MyTestSuitName, MyTestCaseName) {

    Circular obj;

    obj.add(10);
    obj.add(20);
    obj.add(30);

    Node *node;

    ASSERT_NE(nullptr, node = obj.deleteNode()) << "deleteNode() operation should return non NULL value";
    ASSERT_EQ(10, node->data) << "deleteNode() operation should return data of head node";

    ASSERT_NE(nullptr, node = obj.deleteNode()) << "deleteNode() operation should return non NULL value";
    ASSERT_EQ(10, node->data) << "deleteNode() operation should return data of head node";

    ASSERT_EQ(nullptr, node = obj.deleteNode()) << "deleteNode() operation should return non NULL value";
    ASSERT_EQ(nullptr, node = obj.deleteNode()) << "deleteNode() operation should return non NULL value";
    obj.display();


}
