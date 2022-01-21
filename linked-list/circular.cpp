# include "circular.h"
# include <iostream>

using namespace std;

// define Node
Node::Node(int value) {

    data = value;
    next = NULL;

}


// define circular LinkedList operations
Circular::Circular() {

    head = NULL;

}

// add node to existing circular LinkedList
void Circular::add(int data) {

    Node *node = new Node(data);

    if (head == NULL) {
        node->next = node;
        head = node;
        return;
    }

    Node *iter = head;
    while (iter->next != head) {
        iter = iter->next;
    }

    iter->next = node;
    node->next = head;

}

// delete node
Node *Circular::deleteNode() {

    if (head == NULL || head->next == head) {
        head = NULL;
        delete head;
        return NULL;
    }


    Node *iter = head;
    while (iter->next->next != head) {
        iter = iter->next;
    }

    delete iter->next;
    iter->next = head;

    return head;

}

void Circular::display() {

    if (head == NULL) {
        cout << "Circular LinkedList is empty" << endl;
        return;
    }

    if (head->next == head) {
        cout << head->data << endl;
        return;
    }

    Node *iter = head;
    while (iter->next != head) {
        cout << iter->data << "<<";
        iter = iter->next;
    }
    cout << iter->data << endl;

}