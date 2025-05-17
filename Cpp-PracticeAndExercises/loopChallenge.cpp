#include <iostream>
#include <vector>

std::vector<int> numbers{};

void printNumbers() {
	if (!numbers.empty())
	{
		std::cout << "\n[ ";
		for (auto n : numbers)
		{
			std::cout << n << " ";
		}
		std::cout << "]" << std::endl;
	}
	else
	{
		std::cout << "\nthe numbers list is currently empty!" << std::endl;
	}

}
void addNumbers()
{
	int input{};
	std::cout << "\nType the number you want to add: ";
	std::cin >> input;
	numbers.push_back(input);
	std::cout << input << " added! " << std::endl;
}

void meanOfNumbers()
{
	if (!numbers.empty())
	{
		double total{};
		for (auto n : numbers)
		{
			total += n;
		}
		std::cout << "\n the mean of the numbers list is: " << static_cast<double>(total) / numbers.size() << std::endl;
	}
	else
	{
		std::cout << "Unable to calculate mean!" << std::endl;
	}
}


void smallestNumber()
{
	if (!numbers.empty())
	{
		int smallest{ numbers[0] };
		for (auto n : numbers)
		{
			if (n < smallest)
				smallest = n;
		}
		std::cout << "\nthe smallest number on the list is: " << smallest << std::endl;
	}
	else
	{
		std::cout << "Unable to determine smallest!" << std::endl;
	}
}

void largestNumber()
{
	if (!numbers.empty())
	{
		int largest{ numbers[0] };
		for (auto n : numbers)
		{
			if (n > largest)
				largest = n;
		}
		std::cout << "\nthe largest number on the list is: " << largest << std::endl;
	}
	else
	{
		std::cout << "Unable to determine largest!" << std::endl;
	}
}

int main()
{
	char option{};
	do
	{
		std::cout << "\n---------------------------" << std::endl;
		std::cout << "P - print numbers" << std::endl;
		std::cout << "A - add a number" << std::endl;
		std::cout << "M - display mean of numbers" << std::endl;
		std::cout << "S - display smallest number" << std::endl;
		std::cout << "L - display largest number" << std::endl;
		std::cout << "Q - quit" << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << "\nEnter your choice: ";
		std::cin >> option;

		switch (option)
		{
		case('p'):
		case('P'):
			printNumbers();
			break;
		case('a'):
		case('A'):
			addNumbers();
			break;
		case('m'):
		case('M'):
			meanOfNumbers();
			break;
		case('s'):
		case('S'):
			smallestNumber();
			break;
		case('l'):
		case('L'):
			largestNumber();
			break;
		default:
			std::cout << "\nYou chose an invalid option!" << std::endl;
			break;
		}
		//std::cout << "testing initial loop" << std::endl;
	} while (option != 'q' && option != 'Q');
	numbers.clear();
	std::cout << "\nQuiting the program, goodbye!" << std::endl;

	return 0;
}