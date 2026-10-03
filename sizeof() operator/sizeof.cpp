#include <iostream>

// sizeof() = determines the size in bytes of a:
//            variable, data type, class, objects, etc.

int main() {

    std::string name = "Sam";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Patrick", "Spongebob", "Squidward", "Sandy"};

    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}