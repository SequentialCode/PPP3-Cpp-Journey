/*
*Write a program that consists of a while-loop that (each time around the loop) reads in two ints and then prints them. Exit the program when a terminating '|' is entered.
*/

import std;

int main()
{
	int i{}, j{};
	while (std::cout << "Enter two integers (or '|' to quit): " && std::cin >> i >> j)
	{
		std::cout << i << '\t' << j << '\n';
	}
	return 0;
}