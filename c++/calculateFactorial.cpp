#include <iostream>

class FactorialCalculator
{
public:
    // Function to calculate factorial of a given positive integer
    long long calculateFactorial(int n)
    {
        long long factorial = 1;
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        return factorial;
    }
};

int main()
{
    int number;
    std::cout << "Enter a positive integer smaller than 26: ";
    std::cin >> number;

    // Check if the input is a positive integer
    if (number < 0)
    {
        std::cout << "Error: Please enter a positive integer.\n";
        return 1; // Exit the program with an error status
    }

    // Create an instance of the FactorialCalculator class
    FactorialCalculator calculator;

    // Calculate the factorial of the input number
    long long factorial = calculator.calculateFactorial(number);

    // Output the factorial
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;

    return 0;
}
