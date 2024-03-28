#include <iostream>

int main()
{
    double km_per_hour, miles_per_hour;

    // Input speed in kilometers per hour from the user
    std::cout << "Enter speed in kilometers per hour: ";
    std::cin >> km_per_hour;

    // Convert kilometers per hour to miles per hour
    miles_per_hour = km_per_hour * 0.621371;

    // Display the result
    std::cout << "Speed in miles per hour: " << miles_per_hour << " mph\n";

    return 0;
}
