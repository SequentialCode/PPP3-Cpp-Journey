/*
* Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters
* (25-cent coins), half dollars (50-cent coins), and one-dollar coins (100- cent coins). Query the user separately for the number of each size coin,
* e.g., “How many pennies do you have?” Then your program should print out something like this:
* You have 23 pennies.
* You have 17 nickels.
* You have 14 dimes.
* You have 7 quarters.
* You have 3 half dollars.
* The value of all of your coins is 573 cents.
* Make some improvements: if only one of a coin is reported, make the output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes).
* Also, report the sum in dollars and cents, i.e., .73 instead of 573 cents.
*/

import std;

std::string GetLabel(int value, std::string singular, std::string plural)
{
	return (value == 1) ? plural : singular;
}

int main()
{
	int pennies = 0;	
	std::cout << "How many pennies do you have? ";
	if(!(std::cin >> pennies))
	{
		std::cout << "Invalid input\n";
		return 1;
	}
	int nickels = 0;
	std::cout << "\nHow many nickels do you have? ";
	if(!(std::cin >> nickels))
	{
		std::cout << "Invalid input\n";
		return 1;
	}
	int dimes = 0;
	std::cout << "\nHow many dimes do you have? ";
	if(!(std::cin >> dimes))
	{
		std::cout << "Invalid input\n";
		return 1;
	}
	int quarters = 0;
	std::cout << "\nHow many quarters do you have? ";
	if(!(std::cin >> quarters))
	{
		std::cout << "Invalid input\n";
		return 1;
	}
	int halfdollars = 0;
	std::cout << "\nHow many half dollars do you have? ";
	if(!(std::cin >> halfdollars))
	{
		std::cout << "Invalid input\n";
		return 1;
	}
	int dollars = 0;
	std::cout << "\nHow many dollars do you have? ";
	if(!(std::cin >> dollars))
	{
		std::cout << "Invalid input\n";
		return 1;
	}
	int output = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halfdollars * 50) + (dollars * 100); //output is in cents
	std::cout << "\nYou have "<< pennies << GetLabel(pennies, " penny.", " pennies.");
	std::cout << "\nYou have "<< nickels << GetLabel(nickels, " nickel.", " nickels.");
	std::cout << "\nYou have "<< dimes << GetLabel(dimes, " dime.", " dimes.");
	std::cout << "\nYou have "<< quarters << GetLabel(quarters, " quarter.", " quarters.");
	std::cout << "\nYou have "<< halfdollars << GetLabel(halfdollars, " half dollar.",  " half dollars.");
	std::cout << "\nThe total value of all of your coins is " << output / 100 << " dollars and " << output % 100 <<  " cents.";
}