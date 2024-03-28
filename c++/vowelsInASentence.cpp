#include <iostream>
#include <string_view>
#include <string>

class VowelCounter
{
public:
    // Function to count the number of vowels in a sentence
    int countVowels(const std::string_view sentence)
    {
        int vowelCount{0};

        const std::string_view vowels{"aeiouAEIOU"}; // Using string_view for efficiency
        // Iterate through each character in the sentence
        for (char c : sentence)
        {
            // Check if the character is a vowel
            if (vowels.find(c) != std::string_view::npos)
            { // Using string_view::npos for comparison
                vowelCount++;
            }
        }
        return vowelCount;
    }
};

int main()
{
    std::string sentence{};
    std::cout << "Enter a sentence: ";
    std::getline(std::cin >> std::ws, sentence);

    VowelCounter counter;

    int vowelCount = counter.countVowels(sentence);

    // Output the result
    std::cout << "Number of vowels in the sentence: " << vowelCount << '\n';

    return 0;
}
