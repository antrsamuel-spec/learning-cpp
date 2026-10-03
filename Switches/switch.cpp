#include <iostream>

//a swtich is an alternative to using many "else if" statements

int main() {

    int month;

    std::cout << "Enter the month(1-12): ";
    std::cin >> month;

    switch(month) {
        case 1:
            std::cout << "The month is january";
            break;
        case 2:
            std::cout << "The month is february";
            break;
        case 3:
            std::cout << "The month is march";
            break;
        case 4:
            std::cout << "The month is april";
            break;
        case 5:
            std::cout << "The month is may";
            break;
        case 6:
            std::cout << "The month is june";
            break;
        case 7:
            std::cout << "The month is july";
            break;
        case 8:
            std::cout << "The month is august";
            break;
        case 9:
            std::cout << "The month is september";
            break;
        case 10:
            std::cout << "The month is october";
            break;
        case 11:
            std::cout << "The month is november";
            break;
        case 12:
            std::cout << "The month is december";
            break;
        default:
            std::cout << "Not a valid month";       //default case, acts as a normal "else", not "if else", statement
    }

    return 0;
}