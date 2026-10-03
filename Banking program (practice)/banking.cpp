#include <iostream>

void checkBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    double balance = 0.0;
    int choice = 0;

    std::cout << "******************BANKING PROGRAMM******************\n";

    do {
        std::cout << "Select option: \n";
        std::cout << "(1) to check balance\n";
        std::cout << "(2) to deposit money\n";
        std::cout << "(3) to withdraw money\n";
        std::cout << "(4) to exit\n";
        std::cout << "What would you like to do: ";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice) {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance = balance + deposit();
            std::cout << "\n";
            break;
        case 3:
            balance = balance - withdraw(balance);
            std::cout << "\n";
            break;
        case 4:
            std::cout << "Thank you for using our bank, see you next time.\n";
            break;
        default:
            std::cout << "Please enter a valid amount\n";
    }
    } while (choice != 4);

    return 0;
}

void checkBalance(double balance) {
    std::cout << "Your current balance is: " << balance << "\n\n";
}

double deposit() {
    
    double amount;
    
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    return amount;
}

double withdraw(double balance) {
    
    double amount;
    
    std::cout << "Enter amount you would like to withdraw: ";
    std::cin >> amount;

    if(amount > balance) {
        std::cout << "Insufficient balance\n";
    }

    return amount;
}