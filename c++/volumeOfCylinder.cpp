#include <iostream>
#include <cmath> // Required for mathematical functions like pi

int main()
{
    double radius, height, volume;
    const double pi = 3.14159; // Approximate value of pi

    // Input the radius and height of the cylinder from the user
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;

    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    // Calculate the volume of the cylinder
    volume = pi * pow(radius, 2) * height;

    // Output the result
    std::cout << "Volume of the cylinder: " << volume << std::endl;

    return 0;
}
