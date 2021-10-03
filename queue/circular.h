#ifndef CIRCULAR_QUEUE
#define CIRCULAR_QUEUE

class CircularQueue {

    // declare constructor, variables and member functions
public :

    CircularQueue(int);

    int capacity;
    int rear;
    int front;
    int *Q;

    bool enqueue(int);

    int dequeue();

    bool isFull();

    bool isEmpty();

    void display();

};

#endif