#include <iostream>
#include <ctime>  // for std::time_t, std::tm, std::localtime
#include <chrono> // for std::chrono::system_clock

int main()
{
    // Get the current time
    std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    // Convert the current time to a local time struct
    std::tm *localTime = std::localtime(&currentTime);

    // Print the current date and time
    std::cout << "Current Date and Time: ";
    std::cout << (localTime->tm_year + 1900) << '-' // years since 1900
              << (localTime->tm_mon + 1) << '-'     // months since January [0,11]
              << localTime->tm_mday << ' '          // day of the month [1,31]
              << localTime->tm_hour << ':'          // hours since midnight [0,23]
              << localTime->tm_min << ':'           // minutes after the hour [0,59]
              << localTime->tm_sec << '\n';         // seconds after the minute [0,60]

    return 0;
}
