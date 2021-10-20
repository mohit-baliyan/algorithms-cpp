#ifndef BINARY_TREE
#define BINARY_TREE

class Node {

public :
    int data;
    Node *left;
    Node *right;

    Node(int);

};

class BT {
public :
    Node *root;

    BT();

    Node *insertNode(Node *, int[], int, int);

    void preorder(Node *);

};

#endif