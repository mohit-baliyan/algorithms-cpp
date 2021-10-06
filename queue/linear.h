#ifndef LINEAR_QUEUE
#define LINEAR_QUEUE

class Queue {

    // declare constructor, variables and operations for Queue data structure
public :

    Queue(int);

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