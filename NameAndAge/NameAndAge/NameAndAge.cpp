/*
* 2.3 Input and type
*/
import std;

int main()
{
	std::cout << "Enter first name and age\n";
	std::string first_name;
	double age = -1;
	std::cin >> first_name >> age;
	std::cout << "Hello, " << first_name << " (age " << age*12 << " in months).\n";
	return 0;
}