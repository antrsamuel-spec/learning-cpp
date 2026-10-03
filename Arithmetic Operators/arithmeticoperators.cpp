#include <iostream>

//arithmetic operators = return the result of a specific arithmetic operation (+ - * /)

int main() {

    int students = 20;

    //students = students + 1;
    //students += 1;
    //students++;

    //students = students - 1;
    //students -= 1;
    //students--;

    //students = students * 1;
    //students *= 1;

    //students = students / 2;
    //students /= 2;

    int remainder = students % 3;

    std::cout << remainder << "\n";

    return 0;
}