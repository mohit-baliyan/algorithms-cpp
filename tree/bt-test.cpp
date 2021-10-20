# include <gtest/gtest.h>
# include "bt.h"
# include "bt.cpp"

using namespace std;

TEST(MyTestSuitName, MyTestCaseName) {

    BT obj;

    int arr[] = {1, 2, 3, 4, 5, 6, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *root = obj.insertNode(NULL, arr, 0, n);

    obj.preorder(root);

}
