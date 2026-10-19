#include <iostream>

// pointers = a variable that stores a memory address of another variable
//            sometimes it's easier to work with an address

// & address-of operator
// * dereference operator

int main() {

    std::string name = "Sam";
    int age = 15;

    std::string *pName = &name;
    int *pAge = &age;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';

    return 0;
}