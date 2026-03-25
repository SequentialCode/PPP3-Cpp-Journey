/*
Do exercise 6, but with three string values. So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald,
Hemingway, Steinbeck.
*/
import std;
void swap(std::string &a, std::string &b)
{
	std::string temp = a;
	a = b;
	b = temp;
}

int main()
{
	std::string val1, val2, val3, input;
	std::cout << "Enter three comma separated strings: ";
	getline(std::cin, input);
	std::erase(input, ',');
	std::stringstream s(input);
	s >> val1 >> val2 >> val3;
	if(val1 > val2)
		swap(val1, val2);
	if(val1 > val3)
		swap(val1, val3);
	if(val2 > val3)
		swap(val2, val3);
	std::cout << val1 << ", " << val2 << ", " << val3 << '.';
	return 0;
}