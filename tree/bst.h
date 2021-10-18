#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include <vector>

// declare Node to store object with int, left and right pointers
class Node {

public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int);

};

// declare BST
class BST {

public:
    Node *root;

    // constructor
    BST();

    // operations on binary search tree
    Node *add(int, Node *);

    int maximum(Node *);

    int minimum(Node *);

    Node *minimumNode(Node *);

    int height(Node *);

    void inorder(Node *);

    void preorder(Node *);

    void postorder(Node *);

    Node *deleteNode(Node *, int);

    bool IsBST(Node *, Node *, Node *);

    void storeBST(Node *, std::vector<Node *> & );

    Node *buildBalance(Node *root);

    Node *buildBalanceHelper(std::vector<Node *> &, int beg, int end);

};

#endif