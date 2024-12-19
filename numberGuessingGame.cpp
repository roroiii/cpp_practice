#include <iostream>

int main()
{
    int num;
    int guess;
    int tries = 0;
    std::string input;

    srand((int)time(NULL));
    num = (rand() % 100) + 1; // 1-100

    std::cout << "*****Welcome to the number guessing game!*****" << std::endl;

    do
    {
        std::cout << "Enter a guess number: ";
        std::getline(std::cin, input);

        if (input.empty())
        {
            std::cout << "Please enter a number." << std::endl;
            continue;
        }

        try
        {
            guess = std::stoi(input);
            tries++;

            if (guess < num)
            {
                std::cout << "Too low!" << std::endl;
            }
            else if (guess > num)
            {
                std::cout << "Too high!" << std::endl;
            }
            else
            {
                std::cout << "You got it! The number was " << num << std::endl;
                std::cout << "It took you " << tries << " tries." << std::endl;
            }
        }
        catch (const std::invalid_argument &)
        {
            std::cout << "Invalid input. Please enter a number." << std::endl;
        }
    } while (guess != num);

    std::cout << "*****Thanks for playing!*****" << std::endl;

    return 0;
}