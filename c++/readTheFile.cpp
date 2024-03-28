#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Open the file
    std::ifstream file("example.txt");

    // Check if the file was opened successfully
    if (!file.is_open())
    {
        std::cerr << "Error: Failed to open the file.\n";
        return 1; // Return error status
    }

    // Read and display the content of the file line by line
    std::string line;
    while (std::getline(file >> std::ws, line))
    {
        std::cout << line << '\n';
    }

    // Close the file
    file.close();

    return 0;
}
