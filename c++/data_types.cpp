#include <iostream>
#include <iomanip> // for std::setw (which sets the width of the subsequent output)

class fundamentalDataType
{
private:
    const char character{'a'};
    const bool boolean{true};
    const short int shortInt{2};
    const int integer{23};
    const long int longerInt{456};
    const float floating{4.4};
    const double doubleFloat{23.4};
    const long double longDouble{456.33};

public:
    void display() const
    {
        std::cout << std::left;
        std::cout << std::setw(16) << "Type"
                  << "Value\n";
        std::cout << std::setw(16) << "Char:" << character << '\n';
        std::cout << std::setw(16) << "Bool:" << boolean << '\n';
        std::cout << std::setw(16) << "shortInt:" << shortInt << '\n';
        std::cout << std::setw(16) << "Integer:" << integer << '\n';
        std::cout << std::setw(16) << "longInt:" << longerInt << '\n';
        std::cout << std::setw(16) << "Float:" << floating << '\n';
        std::cout << std::setw(16) << "Double:" << doubleFloat << '\n';
        std::cout << std::setw(16) << "longDouble:" << longDouble << '\n';
    }
};

int main()
{
    fundamentalDataType type;
    type.display();
    return 0;
}
