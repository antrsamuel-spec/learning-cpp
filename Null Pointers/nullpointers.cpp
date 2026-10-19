#include <iostream>

// Null-Value = a speacial value that means something has no value
//              when a pointer is hold a null value
//              that pointer is not pointing to anything at all(null-pointer)

// nullptr = keyword represents a null pointer literal

// nullptrs are helpful when determining an address
// was successfully assigned to a pointer

int main() {

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr) {
        std::cout << "address was not assigned\n";
    }
    else {
        std::cout << "address was assigned\n";
        std::cout << *pointer;
    }

    return 0;
}