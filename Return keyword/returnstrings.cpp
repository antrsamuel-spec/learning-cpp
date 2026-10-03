#include <iostream>

std::string fullName(std::string fn, std::string ln);

int main() {

    std::string firstname;
    std::string lastname;

    std::cout << "Enter your first name: ";
    std::getline(std::cin >> std::ws, firstname);

    std::cout << "Enter your last name: ";
    std::getline(std::cin >> std::ws, lastname);

    std::string fullname = fullName(firstname, lastname);

    std::cout << fullname;

    return 0;
}

std::string fullName(std::string fn, std::string ln) {
    return fn + " " + ln;
}