#include <iostream>

int main()
{
	//int favoriteNumber{ 0 };
	//std::cout << "Enter your favorite number: ";
	//std::cin >> favoriteNumber;
	//std::cout << "Amazing!! That's my favorite number too!" << std::endl;
	//std::cout << "No really!!, " << favoriteNumber << " is my favorite number!!" << std::endl;

	int numberOfLargeRooms{ 0 };
	int numberOfSmallRooms{ 0 };

	const double priceLarge{ 60 };
	const double priceSmall{ 30 };
	const double tax{ 0.06 };

	std::cout << "Welcome to Frank's carpet cleaning service!" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "Price per Large Room: $" << priceLarge << std::endl;
	std::cout << "Price per Small Room: $" << priceSmall << std::endl;
	std::cout << "Current Taxes: " << tax << "%" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "Please enter the number of large rooms you wannt to clean: ";
	std::cin >> numberOfLargeRooms;
	std::cout << "Please enter the number of small rooms you wannt to clean: ";
	std::cin >> numberOfSmallRooms;
	std::cout << "===========================================" << std::endl;
	std::cout << "total for large rooms: $" << numberOfLargeRooms * priceLarge << std::endl;
	std::cout << "total for small rooms: $" << numberOfSmallRooms * priceSmall << std::endl;
	std::cout << "taxes for large rooms: $ " << (numberOfLargeRooms * priceLarge) * tax << std::endl;
	std::cout << "taxes for small rooms: $ " << (numberOfSmallRooms * priceSmall) * tax << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "tax totals: $" << ((numberOfSmallRooms * priceSmall) * tax) + ((numberOfLargeRooms * priceLarge) * tax) << std::endl;
	std::cout << "grand total: $" << ((numberOfSmallRooms * priceSmall) * tax) + ((numberOfLargeRooms * priceLarge) * tax) + (numberOfLargeRooms * priceLarge) + (numberOfSmallRooms* priceSmall) << std::endl;
		 



	return 0;
}