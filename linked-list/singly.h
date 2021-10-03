#ifndef SINGLY_LINKED_LIST
#define SINGLY_LINKED_LIST

// Node class to define object having integer data and pointer
class Node {

public :

    int data;
    Node *next;

    Node(int);

};


// LinkedList class for define LinkedList structure
class LinkedList {

public :

    Node *head;

    LinkedList();


    void addLast(int);

    void addFirst(int);

    Node *deleteFirst();

    Node *deleteLast();

    void display();

};

#endif