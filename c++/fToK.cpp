#include <iostream>

int main()
{
    double fahrenheit, kelvin;

    // Input temperature in Fahrenheit from the user
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    // Convert Fahrenheit to Kelvin
    kelvin = (fahrenheit - 32.0) * (5.0 / 9.0) + 273.15;

    // Display the result
    std::cout << "Temperature in Kelvin: " << kelvin << " K\n";

    return 0;
}
