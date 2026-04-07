/*
* Write a program that reads a string from input and then, for each character read, prints out the character and its integer value on a line.
*/

import std;

int main()
{
	std::string input;
	std::cout << "Enter a string: (or EOF to exit)\n";
	while(std::cout << "> " && std::cin >> input)
	{
		for(char c : input)
			std::cout << c << ' ' << (int) c << '\n';
		std::cout << '\n';
	}
	
}

