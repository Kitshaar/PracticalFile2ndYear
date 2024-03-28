#include <iostream>
#include <limits>

class isEven
{
private:
    int num{};

public:
    bool intInputHandler()
    {
        while (true)
        {
            std::cout << "Enter an Integer: ";
            std::cin >> num;

            // Check if the read operation failed
            if (!std::cin)
            {
                // Check if the end of the file is reached
                if (std::cin.eof())
                {
                    exit(0); // Exit the program gracefully if end of file is reached
                }

                // Clear the fail state of std::cin
                std::cin.clear();

                // Ignore any remaining characters in the input buffer
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                // Display an error message to the user
                std::cout << "Invalid input. Please enter a valid number.\n";
                continue;
            }
            else
            {
                // If input is valid, ignore any remaining characters in the input buffer
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                // Return the valid input value
                return true;
            }
        }
    }

    bool is_even() const
    {
        return (num % 2 == 0);
    }

    void display() const
    {
        if (is_even())
        {
            std::cout << num << " is an Even number.\n";
        }
        else
        {
            std::cout << num << " is an Odd number.\n";
        }
    }
};

int main()
{
    isEven check;

    check.intInputHandler();
    check.is_even();
    check.display();

    return 0;
}
