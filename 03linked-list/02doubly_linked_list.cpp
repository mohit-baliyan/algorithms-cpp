# include <iostream>

using namespace std;

// Node class to define object having integer data and pointer

class Node {

public :

    int data;

    Node * next;

    Node * prev;

    Node( int );

};

// constructor of class Node

Node :: Node( int value ) {

    data = value;

    next = NULL;

    prev = NULL;

}

// LinkedList class for define LinkedList structure

class LinkedList {

public :

    Node * head;

    LinkedList();

    void addLast( int );

    void addFirst( int );

    Node* deleteFirst();

    Node* deleteLast();

    void display();

};

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

        node->prev = iter;

    }

}

// add node at head

void LinkedList ::addFirst( int value ) {

    Node * node = new Node( value );

    if( head != NULL ) {

        node->next = head;

        head->prev = node;

    }

    head = node;

}

// delete at head and update head

Node * LinkedList :: deleteFirst()  {

    head = ( head->next != NULL ) ? ( head->next ) : NULL;

    if( head != NULL ){

        head->prev = NULL;

    }

    return head;

}

// delete at tail and return head

Node * LinkedList ::deleteLast() {

    if( head == NULL || head->next == NULL ) {

        return NULL;

    }

    else {

        Node * iter = head;

        while( iter->next->next != NULL ){

            iter = iter->next;

        }

        iter->next = NULL;

        return head;

    }

}


void LinkedList ::display() {

    Node * iter = head;

    while( iter != NULL ) {

        cout << iter->data << ">>";

        iter = iter->next;

    }

    cout << endl;

}


int main() {

    LinkedList obj;

    obj.addFirst( 10 );

    obj.addFirst( 20 );

    obj.addFirst( 30 );

    obj.addLast( 40);

    obj.addLast( 50);

    obj.display();

    cout  << obj.deleteFirst() << endl;

    cout << obj.deleteLast() << endl;

    cout  << obj.deleteFirst() << endl;

    cout << obj.deleteLast() << endl;

    cout  << obj.deleteFirst() << endl;

    cout << obj.deleteLast() << endl;

    obj.display();

    return 0;

}