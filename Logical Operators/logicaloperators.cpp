#include <iostream>

// && = check if two conditions are true
// || = if either or another condition(s) are true
// != = if condition is not true

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18 && age < 99) {
        std::cout << "You are allowed to enter the site!\n";
    }
    else if(age < 18) {
        std::cout << "You are too young to enter the site";
    }
    else {
        std::cout << "You are too old to enter the site!\n";
    }


    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp == 0 || temp == 100) {
        std::cout << "You have either reached the max temp or the minimum temp\n";
    }
    else {
        std::cout << "This is a normal temperature\n";
    }


    int month;

    std::cout << "Enter month (1-12): ";
    std::cin >> month;

    if(month != 1) {
        std::cout << "It is not january\n";
    }
    else {
        std::cout << "It is january\n";
    }

    return 0;
}