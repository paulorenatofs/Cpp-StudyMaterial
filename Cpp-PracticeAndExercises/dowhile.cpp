#include <iostream>
#include <vector>


void find_first_vowel(const std::vector<char>& vec)
{
    //---- WRITE YOUR CODE BELOW THIS LINE----
    bool found{ false };
    size_t idx{ 0 };
    std::vector<char> vowels{ 'a','e','i','o','u' };


    if (!vec.empty())
    {
        do
        {
            for (size_t i = 0; i < vowels.size() && !found; i++)
            {
                if (vec.at(idx) == vowels.at(i))
                {
                    found = true;
                    std::cout << "Vowel found: " << vec.at(idx);
                }

            }
            idx++;

        } while (!found && idx < vec.size());

    }

    if (!found)
    {
        std::cout << "No vowel was found";
    }
    
}

int calculate_pairs(std::vector<int> vec) {
    int result{};

    std::cout << "\n---------------------" << std::endl;
    for (size_t i{ 0 }; i < vec.size(); i++)
    {
        for (size_t j{ i + 1 }; j < vec.size(); j++)
        {
            result += vec.at(i) * vec.at(j);
            std::cout << "Running total: " << vec.at(i) << " * " << vec.at(j) << " = " << result << std::endl;
        }

    }
    std::cout << "---------------------" << std::endl;
    std::cout << "Total: " << result << std::endl;
    return result;
}

int main()
{

    find_first_vowel(std::vector<char>{});
    calculate_pairs(std::vector<int>{1, 2, 3, 4});
	return 0;
}