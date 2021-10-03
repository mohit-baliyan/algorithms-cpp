#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

// Node class to define object having integer data and pointer
class Node {

public :

    int data;
    Node *next;
    Node *prev;

    Node(int);

};

// LinkedList class for define LinkedList structure
class DoublyLinkedList {

public :

    Node *head;

    DoublyLinkedList();

    void addLast(int);

    void addFirst(int);

    Node *deleteFirst();

    Node *deleteLast();

    void display();

};

#endif