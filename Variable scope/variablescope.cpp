#include <iostream>

// local scope = declared inside a function or block {}
// global scope = declared outside of all functions

int myNum = 3;

void printNum();

int main() {

    myNum = 1;
    printNum();
    std::cout << myNum << "\n";

    return 0;
}

void printNum() {
    int myNum = 2;
    std::cout << myNum << "\n";
}