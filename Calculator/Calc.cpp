import std;

int main()
{
	std::string input;
	std::cout << "Enter an arithmetic expression ending with x (ex: 1+2*3x)" << std::endl;
	int lvalue{}, rvalue{};
	char op{};

	if(!(std::cin >> lvalue))
	{
		std::cout << "No valid operand\n";
		return 1;
	}
	while(std::cin >> op)
	{
		if(op != 'x')
			std::cin >> rvalue;

		switch(op)
		{
			case '+':
				lvalue += rvalue;
				break;
			case '-':
				lvalue -= rvalue;
				break;
			case '*':
				lvalue *= rvalue;
				break;
			case '/':
				lvalue /= rvalue;
				break;
			default:
				std::cout << "Result: " << lvalue << '\n';
				return 0;
		}
	}
	std::cerr << "Bad expression"<<'\n';
	return 1;
	
}