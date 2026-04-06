/*
*[1] Write a program that consists of a while-loop that (each time around the loop) reads in two ints and then prints them. Exit the program when a terminating '|' is entered.
	[2] Change the program to write out the smaller value is: followed by the smaller of the numbers and the larger value is: followed by the larger value.
	[3] Augment the program so that it writes the line the numbers are equal (only) if they are equal.
	[4] Change the program so that it uses doubles instead of ints.
	[5] Change the program so that it writes out the numbers are almost equal after writing out which is the larger and the smaller if the two numbers differ by less than 1.0/100.
	[6] Now change the body of the loop so that it reads just one double each time around. Define two variables to keep track of which is the smallest and which is the largest value 	    you have seen so far. Each time through the loop write out the value entered. If it’s the smallest so far, write the smallest so far after the number. If it is the largest so
	    far, write the largest so far after the number.
*/

import std;

int main()
{
	double input{}, smallest{}, largest{};

	std::cout << "Enter numbers (enter '|' to exit):\n";
	std::cout << "> ";

	if(!(std::cin >> input))
	{
		std::cout << "Invalid input\n";
		return 1;
	}

	largest = smallest = input;

	while (std::cout << "> " && std::cin >> input)
	{
		std::cout << input;
		if (input < smallest)
		{
			smallest = input;
			std::cout << " (the smallest so far)";
		}else if (input > largest)
		{
			largest = input;
			std::cout << " (the largest so far)";
		}
		std::cout << "\n";
	}
	
	std::cout << "\nFinal Results:\n";
	std::cout << "Smallest: " << smallest << "\n";
    std::cout << "Largest: " << largest << "\n";

	return 0;
}