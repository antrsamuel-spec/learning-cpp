#include <iostream>

//ternary operator = alternative to an if/else statement
//condition ? expression1 : expression2

int main() {

    int grade;
    bool hungry = true;

    std::cout << "Enter the students grade: ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "The student passes!\n" : std::cout << "The student fails :(\n";

    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}

