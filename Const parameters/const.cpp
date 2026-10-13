#include <iostream>

// const parameter = parameter that is effectively read-only
//                   code is more secure & conveys intent
//                   useful for references and pointers

void printInfo(const std::string name,const int age);

int main() {

    std::string name = "Sam";
    int age = 15;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name,const int age) {
    std::cout << name << '\n';
    std::cout << age << '\n';
}