#include <iostream>

int main()
{
    int number;

    // Input a single-digit number from the user
    std::cout << "Enter a single-digit number: ";
    std::cin >> number;

    // Check if the input number is a single-digit number (0-9)
    if (number >= 0 && number <= 9)
    {
        // Print the rectangular form
        for (int i = 0; i < 6; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                std::cout << number << " ";
            }
            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "Error: Please enter a single-digit number (0-9)." << std::endl;
    }

    return 0;
}
