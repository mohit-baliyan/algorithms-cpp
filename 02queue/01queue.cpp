# include <iostream>

using namespace std;

// define Queue class to declare queue data structure

class Queue {

    // declare constructor and variables

public :

    Queue( int );

    int capacity;

    int rear;

    int front;

    int *Q;

    void enqueue( int );

    int dequeue();

    bool isFull();

    bool isEmpty();

    void display();

};

// constructor to initialize variables

Queue :: Queue( int size ) {

    capacity = size;

    Q = new int[capacity];

    front = -1;

    rear = -1;

}

void Queue ::enqueue( int data ) {

    // if queue is full return

    if( isFull() ) {

        cout << "Queue is full" << endl;

        return;

    }

    // if queue is empty then set front index equal to 0

    if( isEmpty() ) {

        front = 0;

    }

    // pre-increment rear and store data at rear index

    Q[++rear] = data;

}

int Queue :: dequeue() {

    // if queue is empty return -1

    if( isEmpty() ) {

        cout << "Queue is empty" << endl;

        return -1;

    }

    // store element which is at front

    int del = Q[front];

    // if front and rear are equal then only one element is left in queue, so set both front and rear equal to -1

    if( front == rear ) {

        front = rear = -1;

    }

    // else increase front

    else {

        front++;

    }

    // return deleted stored element

    return del;

}

bool Queue ::isEmpty() {

    return front == -1;

}

bool Queue ::isFull() {

    // if rear is at last index of queue

    return capacity == rear + 1;

}

void Queue ::display() {

    for( int i = front; i <= rear; i++ ) {

        // print elements till second last

        if( i < rear ) {

            cout << Q[i] << "<<";

        }

        // print last element

        else {

            cout << Q[i] << endl;

        }

    }

}



int main() {

    // initialize queue object and pass size 3

    Queue obj( 3 );

    // perform dequeue on empty queue

    cout << "Dequeue : " << obj.dequeue() << endl;

    // perform enqueue ( capacity + 1 ) times

    obj.enqueue( 10 );

    obj.enqueue( 20 );

    obj.enqueue( 30 );

    // ( capacity + 1 )th will be fail

    obj.enqueue( 40 );

    // dequeue once to make space to enqueue 40

    cout << "Dequeue : " << obj.dequeue() << endl;

    // enqueue will be failed again due to non empty linear queue structure

    obj.enqueue( 40 );

    // dequeue all    -- perform dequeue 2 times

    cout << "Dequeue : " << obj.dequeue() << endl;

    cout << "Dequeue : " << obj.dequeue() << endl;

    // now dequeue will be failed again

    cout << "Dequeue : " << obj.dequeue() << endl;

    // perform enqueue

    obj.enqueue( 50 );

    obj.display();

    return 0;

}