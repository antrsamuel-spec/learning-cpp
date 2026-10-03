#include <iostream>

// function = a reusable block of code that does something

void happyBirthday(std::string name);

int main() {

    std::string name = "Sam";

    happyBirthday(name);
    happyBirthday(name);
    happyBirthday(name);

    return 0;
}

void happyBirthday(std::string name) {
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to you!\n\n";
}