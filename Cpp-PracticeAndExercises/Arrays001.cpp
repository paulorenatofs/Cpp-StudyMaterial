#include <iostream>

int main() 
{
	int arr001[]{ 100,200,300,400,500 };

	int index = 0;
	//if i had int el, each element would be a copy and have a different address than the arr001 itself.
	for (int& el : arr001)
	{
		std::cout << "element at index " << index << ": " << el << " | address: " << &el << std::endl;
		index++;
	}
	std::cout << arr001 << " Printing the array itself should show the address of first element." << std::endl;
	std::cout << *arr001 << " Derefencing the array should print the first element *arr001" << std::endl;
}