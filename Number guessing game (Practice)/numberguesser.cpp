#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));

    int randNum = (rand() % 100) + 1;
    int userNum;
    int tries;

    do {
        std::cout << "Enter a number (1-100): ";
        std::cin >> userNum;
        tries++;

        if(userNum >= randNum) {
            std::cout << "Too high!\n";
        }
        else {
            std::cout << "Too low!\n";
        }
    } while (userNum != randNum);

    std::cout << "This has taken you " << tries << " tries.\n";

    return 0;
}