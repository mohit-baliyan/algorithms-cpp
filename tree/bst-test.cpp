# include <gtest/gtest.h>
# include "bst.h"
# include "bst.cpp"

using namespace std;

TEST(MyTestSuitName, MyTestCaseName) {

    BST obj;

    Node *root = obj.add(10, NULL);
    root = obj.add(5, root);
    root = obj.add(15, root);
    root = obj.add(20, root);
    root = obj.add(8, root);

    obj.inorder(root);
    cout << endl;
    obj.preorder(root);
    cout << endl;
    obj.postorder(root);

    ASSERT_EQ(3, obj.height(root)) << "Height of above bst should be equal to 4";

    ASSERT_EQ(20, obj.maximum(root)) << "Maximum element in above bst should be equal to 20";

    ASSERT_EQ(5, obj.minimum(root)) << "Minimum element in above bst should be equal to 5";

}
