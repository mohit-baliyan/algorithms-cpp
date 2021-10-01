#ifndef DATE_H
#define DATE_H

class Queue {

    // declare constructor and variables

    public :

        Queue( int );

        int capacity;

        int rear;

        int front;

        int *Q;

        bool enqueue( int );

        int dequeue();

        bool isFull();

        bool isEmpty();

        void display();

};

#endif