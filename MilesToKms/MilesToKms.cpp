/*
* Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the user to enter a number
* of miles. Hint: A mile is1.609 kilometers.
*/

import std;

int main() 
{
	std::cout << "Enter miles to be converted to kilometers: ";
	double miles;
	std::cin >> miles;
	if (miles < 0) {
		std::cout << "Miles cannot be negative." << std::endl;
		return 1;
	}

	std::cout << miles << " miles is " << miles * 1.60934 << " kilometers." << std::endl;
	return 0;
}
