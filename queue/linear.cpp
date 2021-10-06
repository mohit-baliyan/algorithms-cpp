# include <iostream>
# include "linear.h"

using namespace std;

// constructor to initialize variables
Queue::Queue(int size) {

    capacity = size;
    Q = new int[capacity];
    front = -1;
    rear = -1;

}

bool Queue::enqueue(int data) {

    // if queue is full return
    if (isFull()) {
        cout << "Queue is full" << endl;
        return false;
    }

    // if queue is empty then set front index equal to 0
    if (isEmpty()) {
        front = 0;
    }

    // pre-increment rear and store data at rear index
    Q[++rear] = data;

    return true;

}

int Queue::dequeue() {

    // if queue is empty return -1
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1;
    }

    // store element which is at front
    int del = Q[front];


    // if front and rear are equal then only one element is left in queue, so set both front and rear equal to -1
    if (front == rear) {
        front = rear = -1;
    }

        // else increase front
    else {
        front++;
    }

    // return deleted stored element
    return del;

}

bool Queue::isEmpty() {

    return front == -1;

}

bool Queue::isFull() {

    // if rear is at last index of queue
    return capacity == rear + 1;

}

void Queue::display() {

    for (int i = front; i <= rear; i++) {

        cout << Q[i] << ">>";

    }

}
