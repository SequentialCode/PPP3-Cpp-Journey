/*
* Write a program that takes an operation followed by two operands and outputs the result. For example:
+ 100 3.14
* 45
*/

import std;
int main()
{
	std::cout << "Enter an operation followed by two operands (e.g. + 100 3.14): ";
	std::string input;
	std::getline(std::cin, input);

	//Not just whitespaces or empty string
	if(input.find_first_not_of(" \t\n\r") == std::string::npos)
	{
		std::cout << "Invalid input with only whitespaces!\n";
		return 1;
	}

	std::stringstream ss(input);
	std::string operation;
	double operand1 = 0.0, operand2 = 0.0;

	if(ss >> operation >> operand1 >> operand2)
	{
		std::string val4;
		if(ss >> val4)
		{
			std::cout << "Hmm, too many inputs!";
			return 1;
		}
		//We have three values, now is the first value representing a basic operator?

		if(operation == "+" || operation == "plus")
			std::cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << '\n';
		else if(operation == "-" || operation == "minus")
			std::cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << '\n';
		else if(operation == "*" || operation == "mul")
			std::cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << '\n';	
		else if(operation == "/" || operation == "div")
			if(operand2 != 0)
				std::cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << '\n';	
			else
				std::cout << "You can't divide by zero, that's the rule mate! \n";
		else
			std::cout << "Not a valid operator!";
		
	}else
		std::cout << "Either input isn't adequate or of the correct type \n";
}