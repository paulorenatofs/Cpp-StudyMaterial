#include <iostream>

int main()
{
	const int PENNIE{ 1 };
	const int NICKEL{ 5 };
	const int DIME{ 10 };
	const int QUARTER{ 25 };
	const int DOLLAR{ 100 };

	int totalPennies{ 0 };
	int totalDollars{ 0 };
	int totalQuarters{ 0 };
	int totalDimes{ 0 };
	int totalNickels{ 0 };
	int remainingPennies{ 0 };
	int rest{ 0 };

	std::cout << "Enter the ammount of pennies: ";
	std::cin >> totalPennies;

	totalDollars = totalPennies / DOLLAR;
	rest = totalPennies % DOLLAR;

	totalQuarters = rest / QUARTER;
	rest %= QUARTER;

	totalDimes = rest / DIME;
	rest %= DIME;

	totalNickels = rest / NICKEL;
	rest %= NICKEL;

	remainingPennies = rest;



	std::cout << "You can give the change as: " << std::endl;
	std::cout << "Dollars: " << totalDollars << std::endl;
	std::cout << "Quarters: " << totalQuarters << std::endl;
	std::cout << "Dimes: " << totalDimes << std::endl;
	std::cout << "Nickels: " << totalNickels << std::endl;
	std::cout << "Pennies: " << remainingPennies << std::endl;



	return 0;
}