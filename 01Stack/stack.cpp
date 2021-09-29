# include <iostream>

using namespace std;

// define class Stack

class Stack {

public :

    // declare constructor

    Stack( int );


    // declare necessary variable and array to store Stack data structure

    int top;

    int capacity;

    int *S;

    // declare class methods

    void push( int );

    int pop();

    bool isEmpty();

    bool isFull();

    int peek();

    void display();

};



// constructor definition

Stack :: Stack( int size ) {

    capacity = size;

    top = -1;

    S = new int[capacity];

}


// methods definition

void Stack :: push( int data ) {

    // Is stack full ?

    if( isFull() ) {

        cout << "Stack Overflow" << endl;

        return;

    }

    // increment top and push element at location top in stack

    S[++top] = data;

}

int Stack :: pop() {

    // Is stack empty ?

    if( isEmpty() ) {

        cout << "Stack Underflow";

        return -1;

    }

    // return element at location top in stack and decrement top

    return S[top--];

}

bool Stack ::isEmpty() {

    // if top is at -1 then it is empty

    return top == -1;

}

bool Stack :: isFull() {

    // if top is the last index of stack then it is full

    return top == ( capacity - 1 );

}

int Stack :: peek() {

    // return element at top

    return S[top];

}

void Stack :: display() {

    // Is stack empty ?

    if( isEmpty() ) {

        cout << "Stack is empty" << endl;

        return;

    }

    // initialize iter with top and access stack elements in bottom up fashion

    for( int iter = top; iter > -1; iter-- ) {

        if( iter > 0 ) {

           cout << S[iter] << " << ";

        }

        else {

            cout << S[iter] << endl;

        }

    }

}


int main() {

    Stack obj( 3 );

    cout << "Pop operation : " << obj.pop() << endl;

    obj.push( 1 );

    obj.push( 2);

    obj.push( 3);

    obj.push( 4);

    cout << "Top : " << obj.peek() << endl;

    cout << "Pop operation : " << obj.pop() << endl;

    obj.push( 4 );

    obj.display();

    return 0;

}
