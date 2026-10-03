#include <iostream>

    /*
    loop() {
        loop() {
            
        }    
    }
    */

int main() {

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows: ";
    std::cin >> rows;
    
    std::cout << "How many columns: ";
    std::cin >> columns;

    std::cout << "What symbol: ";
    std::cin >> symbol;

    for(int i = 1; i <= columns; i++) {
        for(int j = 1; j <= rows; j++) {
            std::cout << symbol;
        }
        std::cout << "\n";
    }

    return 0;
}