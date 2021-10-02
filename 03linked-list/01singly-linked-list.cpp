# include <iostream>

# include "01singly-linked-list.h"

using namespace std;

// constructor of class Node

Node :: Node( int value ) {

    data = value;

    next = NULL;

}

// constructor for LinkedList class

LinkedList :: LinkedList() {

    head = NULL;

}

// add node at tail

void LinkedList :: addLast( int value ) {

    Node * node = new Node( value );

    if( head == NULL)  {

        head = node;

    }

    else {

        Node * iter = head;

        while( iter->next != NULL ) {

            iter = iter->next;

        }

        iter->next = node;

    }

}

// add node at head

void LinkedList ::addFirst( int value ) {

    Node * node = new Node( value );

    node->next = head;

    head = node;

}

// delete at head and update head

Node * LinkedList :: deleteFirst()  {

     head = ( head->next != NULL ) ? ( head->next ) : NULL;

     return head;

}

// delete at tail and return head

Node * LinkedList ::deleteLast() {

    if( head == NULL || head->next == NULL ) {

        head = NULL;

    }

    else {

        Node * iter = head;

        while( iter->next->next != NULL ){

            iter = iter->next;

        }

        iter->next = NULL;

    }

    return head;

}


void LinkedList ::display() {

    if( head == NULL ) {

        cout << "Empty LinkedList" << endl;

    }

    Node * iter = head;

    while( iter != NULL ) {

        cout << iter->data << ">>";

        iter = iter->next;

    }

    cout << endl;

}