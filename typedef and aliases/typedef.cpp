#include <iostream>
#include <vector>

//typedef = reserved keyword used to create an additional name (alias) for another data type.
//          new identifier for an existing type
//          helps with readability and reduces typos
//          largely replaced by using

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main() {

    text_t name = "Sam";
    number_t x = 5;

    std::cout << name << "\n";
    std::cout << x << "\n";

    return 0;
}