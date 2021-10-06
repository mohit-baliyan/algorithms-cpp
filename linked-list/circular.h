#ifndef CIRCULAR_LINKED_LIST
#define CIRCULAR_LINKED_LIST

// declare Node structure
class Node {

public :

    int data;
    Node *next;

    Node(int);

};

// declare class Circular for member functions
class Circular {

public :

    Circular();

    // declare head
    Node *head;

    // declare operations
    void add(int);

    Node *deleteNode();

    void display();

};

#endif