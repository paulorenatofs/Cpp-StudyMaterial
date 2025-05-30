#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::cout << "Please enter the word for the pyramid: ";
	std::string userInput;

	std::cin >> userInput;
	std::string initialPrint{};
	std::string finalPrint{};
	std::string spaces{};
	for (size_t i = 0; i < userInput.length(); i++)
	{
		spaces = std::string(userInput.length() - i - 1,' ');

		initialPrint = userInput.substr(0,i + 1);
		if (i > 0)
		{
			finalPrint = userInput.substr(0, i);
			size_t len = finalPrint.length();
			for (size_t j = 0; j < len / 2; j++)
				std::swap(finalPrint.at(j), finalPrint.at(len - 1 - j));
		}

		std::cout << spaces << initialPrint;
		std::cout << finalPrint << std::endl;
	}



	return 0;
}