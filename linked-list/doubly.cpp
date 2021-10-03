# include "doubly.h"
# include <iostream>

using namespace std;

// constructor of class Node
Node::Node(int value) {

    data = value;
    next = NULL;
    prev = NULL;

}


// constructor for LinkedList class
DoublyLinkedList::DoublyLinkedList() {

    head = NULL;

}

// add node at tail
void DoublyLinkedList::addLast(int value) {

    Node *node = new Node(value);

    if (head == NULL) {
        head = node;
    } else {

        Node *iter = head;

        while (iter->next != NULL) {
            iter = iter->next;
        }

        iter->next = node;
        node->prev = iter;

    }

}


// add node at head
void DoublyLinkedList::addFirst(int value) {

    Node *node = new Node(value);

    if (head != NULL) {
        node->next = head;
        head->prev = node;
    }

    head = node;

}


// delete at head and update head
Node *DoublyLinkedList::deleteFirst() {

    if (head != NULL) {
        Node *node = head;
        head = head->next;
        head->prev = NULL;

        delete node;
    }

    return head;

}

// delete at tail and return head
Node *DoublyLinkedList::deleteLast() {

    if (head == NULL || head->next == NULL) {
        delete head;
        head = NULL;
    } else {
        Node *iter = head;

        while (iter->next->next != NULL) {
            iter = iter->next;
        }

        delete iter->next;
        iter->next = NULL;
    }

    return head;

}


void DoublyLinkedList::display() {

    if (head == NULL) {
        cout << "Empty Doubly LinkedList" << endl;
        return;
    }

    Node *iter = head;

    while (iter != NULL) {
        cout << iter->data << ">>";
        iter = iter->next;
    }

    cout << endl;

}
