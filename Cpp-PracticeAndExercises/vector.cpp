#include <iostream>
#include <vector>


int main()
{
	std::vector<int> vector1{};
	std::vector<int> vector2{};


	vector1.push_back(10);
	vector1.push_back(20);

	std::cout << "Printing vector1: " << std::endl;
	for (int i = 0; i < vector1.size(); i++)
	{
		std::cout << vector1.at(i) << std::endl;
	}



	vector2.push_back(100);
	vector2.push_back(200);

	std::cout << "Printing vector2: " << std::endl;
	for (int i = 0; i < vector2.size(); i++)
	{
		std::cout << vector2.at(i) << std::endl;
	}


	std::vector<std::vector<int>> vector2D{};

	vector2D.push_back(vector1);
	vector2D.push_back(vector2);

	std::cout << "Printing vector2D: " << std::endl;
	for (int i = 0; i < vector2D.size(); i++)
	{
		for (int j = 0; j < vector2D.at(i).size(); j ++)
			std::cout << vector2D.at(i).at(j) << std::endl;
	}


	std::cout << "changed vector1 first element to: ";
	vector1.at(0) = 1000;

	std::cout << vector1.at(0) << std::endl;

	std::cout << "Printing vector2D after change " << std::endl;
	for (int i = 0; i < vector2D.size(); i++)
	{
		for (int j = 0; j < vector2D.at(i).size(); j++)
			std::cout << vector2D.at(i).at(j) << std::endl;
	}
}