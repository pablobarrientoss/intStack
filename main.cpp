/*********************
* Code Written by Pablo Barrientos
* 06/07/2023
* Assigment 4: int stack
* This program replicates simple ADT stack functions and
  uses main to tests functions
**********************/

#include "main.h"

// main function
int main() {

    // size for testing
    int stackSize = 100;

    // NEGATIVE STACK SIZE TEST //
    try {
        Stack s0(-20);
    } catch (std::invalid_argument &e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    // stack test object creation
    Stack test(stackSize);

    // PUSH PEEK TEST //
    for (int i = 0; i < stackSize; i++) {

        int value = rand();
        bool success = test.push(value);

        if (!success) {
            std::cout << "Test Failed: Overflow at " << i << std::endl;
            return 0;
        }
        if (test.peek() != value) {
            std::cout << "Test failed: " << i << std::endl;
            return 0;
        }
    }

    test.printStack();

    // POP TEST //
    for (int i = 0; i < stackSize; i++) {
        try {
            int popValue = test.pop();
        } catch (std::underflow_error &e) {
            std::cout << "Test failed: Underflow at " << i << std::endl;
            return 0;
        }
    }

    std::cout << "Pop Test Passed" << std::endl;

    // UNDERFLOW POP TEST //
    try {
        test.pop();
    } catch (std::underflow_error &e) {
        std::cout << "Underflow caught" << std::endl;
    }

    // stack should be empty
    test.printStack();
    return 0;
}