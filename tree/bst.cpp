#include "bst.h"
#include <iostream>

using namespace std;

// Node constructor for Node class
Node::Node(int key) {
    data = key;
    left = NULL;
    right = NULL;
}

// BST constructor for BST class
BST::BST() {
    root = NULL;
}


Node *BST::add(int data, Node *root) {
    if (root == NULL) {
        Node *node = new Node(data);
        return node;
    } else if (root->data > data) {
        root->left = add(data, root->left);
    } else {
        root->right = add(data, root->right);

    }
    return root;
}

void BST::inorder(Node *root) {

    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << ">>";
    inorder(root->right);

}

void BST::preorder(Node *root) {

    if (root == NULL) {
        return;
    }
    cout << root->data << ">>";
    preorder(root->left);
    preorder(root->right);

}

void BST::postorder(Node *root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << ">>";

}


int BST::maximum(Node *root) {

    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;

}

int BST::minimum(Node *root) {

    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;

}

int BST::height(Node *root) {

    if (root == NULL) {
        return 0;
    }

    return max(height(root->left), height(root->right)) + 1;

}