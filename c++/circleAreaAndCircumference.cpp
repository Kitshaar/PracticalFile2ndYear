#include <iostream>
#include <cmath> // Required for mathematical functions like pi

int main()
{
    double radius, area, circumference;
    const double pi = 3.14159; // Approximate value of pi

    // Input the radius of the circle from the user
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the area of the circle
    area = pi * pow(radius, 2);

    // Calculate the circumference of the circle
    circumference = 2 * pi * radius;

    // Output the results
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}
