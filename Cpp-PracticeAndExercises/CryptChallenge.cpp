#include <iostream>
#include <string>
#include <vector>



int main()
{
	//This was my original atempt, I don't know why I did it like this. O(N^2)
	//std::vector<std::string> dictionary{"abcdefghijklmnopqrstuvxwyzABCDEFGHIJKLMNOPQRSTUVXWYZ","ZYWXMNOPQRABCDEFSTUVGHIJKLzywxmnopqrabcdefstuvghijkl"};

	//std::string secret{};
	//std::cout << "Input your secret: ";
	//std::getline(std::cin, secret);

	//for (size_t i = 0; i < secret.length(); i ++)
	//{
	//	for (size_t j = 0; j < dictionary[0].length(); j++)
	//	{
	//		if (secret[i] == dictionary[0].at(j))
	//		{
	//			secret.at(i) = dictionary[1].at(j);
	//			break;
	//		}

	//	}
	//}

	//std::cout << "encrypted secret: " << secret << std::endl;

	//for (size_t i = 0; i < secret.length(); i++)
	//{
	//	for (size_t j = 0; j < dictionary[1].length(); j++)
	//	{
	//		if (secret[i] == dictionary[1].at(j))
	//		{
	//			secret.at(i) = dictionary[0].at(j);
	//			break;
	//		}

	//	}
	//}

	//std::cout << "\ndecrypted secret: " << secret << std::endl;

	std::string alphabet{ " [abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	std::string      key{ "[ ZYWXMNOPQRABCDEFSTUVGHIJKLzywxmnopqrabcdefstuvghijkl" };

	std::cout << "Please input your secret: ";
	std::string secret{};
	std::string encrypted{};
	std::string restored{};

	std::getline(std::cin, secret);

	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "\nProcessing Encryption..." << std::endl;


	for (char letter : secret)
	{
		size_t index = alphabet.find(letter);

		if (index != std::string::npos)
		{
			encrypted += key.at(index);
		}
		else
		{
			encrypted += letter;
		}
		
	}

	std::cout << "The encrypted secret is: " << encrypted << std::endl;

	std::cout << "\n--------------------------------------------------" << std::endl;
	std::cout << "\nProcessing decryption..." << std::endl;


	for (char letter : encrypted)
	{
		size_t index = key.find(letter);

		if (index != std::string::npos)
		{
			restored += alphabet.at(index);
		}
		else
		{
			restored += letter;
		}

	}

	std::cout << "The decrypted secret is: " << restored << std::endl;

}