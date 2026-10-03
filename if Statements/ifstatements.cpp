#include <iostream>

//if statement = if condition is true, do something, if not, don't do it

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 99) {
        std::cout << "You are too old to enter the site!";
    }
    else if(age >= 12) {
        std::cout << "You are allowed to enter the site!\n";
    }
    else if(age <= 0) {
        std::cout << "You haven't been born yet!";
    }
    else if(age >= 99) {
        std::cout << "You are too old to enter the site!";
    }
    else {
        std::cout << "You are too young to enter the site!\n";
    }

    return 0;
}