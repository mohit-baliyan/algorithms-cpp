# include <iostream>
# include "stack.h"

using namespace std;

// constructor definition
Stack::Stack(int size) {

    capacity = size;
    top = -1;
    S = new int[capacity];

}

// methods definition
bool Stack::push(int data) {

    // Is stack full ?
    if (isFull()) {
        cout << "Stack Overflow" << endl;
        return false;
    }

    // increment top and push element at location top in stack
    S[++top] = data;
    return true;

}

int Stack::pop() {

    // Is stack empty ?
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        return -1;
    }

    // return element at location top in stack and decrement top
    return S[top--];

}

bool Stack::isEmpty() {

    // if top is at -1 then it is empty
    return top == -1;

}

bool Stack::isFull() {

    // if top is the last index of stack then it is full
    return top == (capacity - 1);

}

int Stack::peek() {

    if (isEmpty()) {
        return -1;
    }

    // return element at top
    return S[top];

}

void Stack::display() {

    // Is stack empty ?
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }

    // initialize iter with top and access stack elements in bottom up fashion
    for (int iter = top; iter > -1; iter--) {
        cout << S[iter] << " ";
    }

    cout << endl;

}
