#include <iostream>

//reference cplusplus.com

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    /*
    if(name.length() > 12) {
        std::cout << "Your name can't be above 12 characters.";
    }
    else {
        std::cout << "Name Saved.";
    }
    */


    /*
    if(name.empty()) {
        std::cout << "You didn't enter a name";
    }
    else {
        std::cout << "Welcome " << name;
    }   
    */

    /*
    name.clear();

    std::cout << "Hello, " << name;
    */

    /*
    name.append("@gmail.com");
    std::cout << "Your username is now: " << name;
    */

    /*
    std::cout << name.at(0);
    */

    /*
    name.insert(0, "@");
    */

    /*
    std::cout << name.find(' ');
    */

    /*
    name.erase(0, 3);
    */

    return 0;
}