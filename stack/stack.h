#ifndef STACK
#define STACK

class Stack {

public :

    // declare constructor
    Stack(int);


    // declare necessary variable and array to store Stack data structure
    int top;
    int capacity;
    int *S;

    // declare class methods
    bool push(int);

    int pop();

    bool isEmpty();

    bool isFull();

    int peek();

    void display();

};

#endif