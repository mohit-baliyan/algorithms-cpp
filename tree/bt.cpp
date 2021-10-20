#include "bt.h"
#include <iostream>

using namespace std;

Node::Node(int key) {
    data = key;
    left = NULL;
    right = NULL;
}

BT::BT() {
    root = NULL;
}

Node *BT::insertNode(Node *root, int arr[], int i, int n) {

    if (i < n) {
        Node *node = new Node(arr[i]);
        root = node;

        root->left = insertNode(root->left, arr, 2 * i + 1, n);
        root->right = insertNode(root->right, arr, 2 * i + 2, n);
    }

    return root;

}

void BT::preorder(Node *root) {

    if (root == NULL) {
        return;
    }

    cout << root->data << ">>";
    preorder(root->left);
    preorder(root->right);

}

