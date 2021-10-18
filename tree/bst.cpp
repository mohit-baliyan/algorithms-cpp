#include "bst.h"
#include <iostream>
#include <vector>

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

Node *BST::minimumNode(Node *root) {

    while (root->left != NULL) {
        root = root->left;
    }
    return root;

}

Node *BST::deleteNode(Node *root, int item) {

    if (root == NULL) {
        return NULL;
    } else if (root->data > item) {
        root->left = deleteNode(root->left, item);
    } else if (root->data < item) {
        root->right = deleteNode(root->right, item);
    } else {

        if (root->left == NULL && root->right == NULL) {
            root = NULL;
            delete root;
        } else if (root->left != NULL) {
            Node *store = root->left;
            root = NULL;
            delete root;
            root = store;
        } else if (root->right != NULL) {
            Node *store = root->right;
            root = NULL;
            delete root;
            root = store;
        } else {
            Node *store = BST::minimumNode(root->right);
            root->data = store->data;
            deleteNode(root->right, store->data);
        }


    }

    return root;

}

bool BST::IsBST(Node *root, Node *l, Node *r) {

    if (root == NULL) {
        return true;
    }

    if (l != NULL && l->data >= root->data) {
        return false;
    }

    if (r != NULL && r->data <= root->data) {
        return false;
    }

    return IsBST(root->left, l, root) && IsBST(root->right, root, r);


}

void BST::storeBST(Node *root, std::vector<Node *> &nodes) {

    if (root == NULL) {
        return;
    }

    storeBST(root->left, nodes);
    nodes.push_back(root);
    storeBST(root->right, nodes);

}

Node *BST::buildBalance(Node *root) {

    if (root == NULL) {
        return NULL;
    }

    vector<Node *> nodes;
    storeBST(root, nodes);
    int size = nodes.size();

    return buildBalanceHelper(nodes, 0, size - 1);

}

Node *BST::buildBalanceHelper(std::vector<Node *> &nodes, int beg, int end) {

    if (beg > end) {
        return NULL;
    }

    int mid = (beg + end) / 2;
    Node *root = nodes[mid];

    root->left = buildBalanceHelper(nodes, beg, mid - 1);
    root->right = buildBalanceHelper(nodes, mid + 1, end);

    return root;

}
