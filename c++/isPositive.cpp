#include <iostream>

int main()
{
    int number{};

    // Input number from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0)
    {
        std::cout << "The number is positive.\n";
    }
    else if (number < 0)
    {
        std::cout << "The number is negative.\n";
    }
    else
    {
        std::cout << "The number is zero.\n";
    }

    return 0;
}
