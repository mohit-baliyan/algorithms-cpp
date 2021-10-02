# include <iostream>

# include "02circular-queue.h"

using namespace std;

// constructor to initialize variables

CircularQueue ::CircularQueue( int size ) {

    capacity = size;

    Q = new int[capacity];

    front = -1;

    rear = -1;

}

bool CircularQueue ::enqueue( int data ) {

    // if queue is full return

    if( isFull() ) {

        cout << "Queue is full" << endl;

        return false;

    }

    // if queue is empty then set front index equal to 0

    if( isEmpty() ) {

        front = 0;

    }

    // pre-increment rear and apply modulus to resize according to queue size and store data at rear index

    rear = ( rear + 1 ) % capacity;

    Q[rear] = data;

    return true;

}

int CircularQueue :: dequeue() {

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

        front = ( front + 1 ) % capacity;

    }

    // return deleted stored element

    return del;

}

bool CircularQueue ::isEmpty() {

    return front == -1;

}

bool CircularQueue ::isFull() {

    // if rear is at last index of queue

    return ( ( rear + 1 ) % capacity ) == front;

}

void CircularQueue ::display() {

    for( int i = front; i != rear; i = ( i + 1 ) % capacity  ) {

        cout << Q[i] << ">>";

    }

    cout << Q[rear] << endl;

}