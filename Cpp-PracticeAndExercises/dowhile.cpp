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

int main()
{

    find_first_vowel(std::vector<char>{});
	return 0;
}