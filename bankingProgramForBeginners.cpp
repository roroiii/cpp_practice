#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    while (choice != 4)
    {
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance = withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice\n";
        }
    }

    return 0;
}

void showBalance(double balance)
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Your balance is $" << balance << "\n";
}

double deposit()
{
    double amount = 0;
    std::cout << "Enter the amount you want to deposit: ";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "Invalid amount\n";
        return 0;
    }

    return amount;
}

double withdraw(double balance)
{
    double amount = 0;
    std::cout << "Enter the amount you want to withdraw: ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "You don't have enough money\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "Invalid amount\n";
        return 0;
    }
    else
    {
        balance -= amount;
    }

    return balance;
}
