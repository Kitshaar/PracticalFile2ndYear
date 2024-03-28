#include <iostream>

int main()
{
    // Define variables
    int a = 5;
    int b = 10;
    int c = 3;
    int result;

    // Compute the expressions
    result = a + b + c;
    std::cout << "Result of a + b + c: " << result << std::endl;

    result = (a + b) * c;
    std::cout << "Result of (a + b) * c: " << result << std::endl;

    return 0;
}
