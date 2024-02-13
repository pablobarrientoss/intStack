/*********************
* Code Written by Pablo Barrientos
* 06/07/2023
**********************/

#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <stdexcept>

class Stack{

// stack attributes
private:
    int *arr;
    int top;
    int capacity;

public:
    // default constructor
    Stack(int size = 10);

    // function prototypes
    bool push(int);
    int pop();
    bool isEmpty();
    int peek();
    void printStack();

};


#endif //STACK_STACK_H
