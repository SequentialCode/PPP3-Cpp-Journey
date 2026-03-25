/*
* Write a program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2. When the user inputs a number, the
program should print out the corresponding digit. Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know if the user enters
something that doesn’t correspond, such as stupid computer!.
*/

import std;
int main()
{
	std::string input;
	std::cout << "Enter a spelled-out number (zero to four): ";
	std::cin >> input;

	if(input == "zero" || input == "Zero" || input == "ZERO")
		std::cout << 0;
	else if(input == "one" || input == "One" || input == "ONE")
		std::cout << 1;
	else if(input == "two" || input == "Two" || input == "TWO")
		std::cout << 2;
	else if(input == "three" || input == "Three" || input == "THREE")
		std::cout << 3;
	else if(input == "four" || input == "Four" || input == "FOUR")
		std::cout << 4;
	else
		std::cout << "not a number I know";

	return 0;

}