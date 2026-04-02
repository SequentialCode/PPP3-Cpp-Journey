/*
*[1] Write a program that consists of a while-loop that (each time around the loop) reads in two ints and then prints them. Exit the program when a terminating '|' is entered.
	[2] Change the program to write out the smaller value is: followed by the smaller of the numbers and the larger value is: followed by the larger value.
	[3] Augment the program so that it writes the line the numbers are equal (only) if they are equal.
	[4] Change the program so that it uses doubles instead of ints.
*/

import std;

int main()
{
	double i{}, j{};
	while (std::cout << "Enter two floating-point numbers (or '|' to quit): " && std::cin >> i >> j)
	{
		if (i == j)
			std::cout << "the numbers are equal\n";
		else
		{
			if (i < j)
			{
				std::cout << "the smaller value is: " << i << '\n';
				std::cout << "the larger value is: " << j << '\n';
			}
			else
			{
				std::cout << "the smaller value is: " << j << '\n';
				std::cout << "the larger value is: " << i << '\n';
			}
		}

	}
	return 0;
}