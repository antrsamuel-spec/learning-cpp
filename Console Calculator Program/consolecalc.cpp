#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "Enter your first number: ";
    std::cin >> num1;

    std::cout << "Enter your operator: ";
    std::cin >> op;

    std::cout << "Enter your second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << result << "\n";
        default:
            std::cout << "Please enter a valid operator (+ - * /) or number";
    }

    return 0;
}