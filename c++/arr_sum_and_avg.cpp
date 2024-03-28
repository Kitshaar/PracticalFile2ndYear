#include <iostream>
#include <limits>

class arrSumAndAvg
{
private:
    static constexpr int count{5};
    int arr[count];
    int sum{};
    double average{};

public:
    int intInputHandler(size_t index)
    {
        while (true)
        {
            int num{};
            std::cout << "Enter an Integer for array position " << index << " : ";
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
                return num;
            }
        }
    }

    void arr_input_and_sum()
    {
        for (size_t i = 0; i < count; i++)
        {
            arr[i] = {intInputHandler(i)};
            sum += arr[i];
        }
    }

    // Calculate the average
    void avg()
    {
        average = {static_cast<double>(sum) / count};
    }

    void display() const
    {
        // Output sum and average
        std::cout << "Sum of array elements: " << sum << '\n';
        std::cout << "Average of array elements: " << average << '\n';
    }
};

int main()
{
    arrSumAndAvg arr;

    arr.arr_input_and_sum();
    arr.avg();
    arr.display();
    return 0;
}
