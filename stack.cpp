/*********************
* Code Written by Pablo Barrientos
* 06/07/2023
**********************/

#include "stack.h"

// for debugging
#include <iostream>

// stack creation
Stack::Stack(int size) {
    if (size <= 0) {
        throw std::invalid_argument("Size must be positive!");
    }
    arr = new int[size];
    capacity = size;
    top = -1;
}

// function to push stack up
bool Stack::push(int x){
    bool pushed = false;
    if(top != capacity - 1) {
        arr[++top] = x;
        pushed = true;
    }
        return pushed;
    }

// function to remove data from the top of the stack
int Stack::pop() {
    int temp;
    if (isEmpty()) {
        throw std::underflow_error("Stack underflow");
    }
    temp = arr[top];
    --top;
    return temp;
}

// function to check if stack is empty
bool Stack::isEmpty()
{
    return top == -1;
}

// function to report top value of stack
int Stack::peek() {
    if (isEmpty()){
        throw std::underflow_error("Stack underflow");
    }
    return arr[top];
}


/**
 * Function FOR DEBUGGING PURPOSES
 */
void Stack::printStack() {
    if (isEmpty()) {
        std::cout << "Stack is empty\n";
    } else {
        std::cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
}