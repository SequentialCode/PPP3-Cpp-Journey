/*
* 2. Objects, Types, and Values. Drill.
*/

import std;

int main() 
{
	std::cout << "Enter the name of the person you want to write to: ";
	std::string first_name;
	std::cin >> first_name;
	std::cout << "Dear " << first_name << "," << std::endl;
	std:::cout << "	How are you ? I am fine.I miss	you. We had been so good friends. I don't know why you are not talking to me. I hope we can be friends again." << std::endl;
	std:::string friend_name;
	std::cout << "Enter the name of a mutual friend: ";
	std::cin >> friend_name;
	std::cout << " Have you seen " << friend_name << " lately ? " << std::endl;
	std::cout << "Enter the age of the recipient: ";
	int age;
	stdd::cin >> age;
	if (age < 0 || age > 110) 
	{
		std::cout << "You're kidding!" << std::endl;
		return 0;
	}
	if (age < 12)
	{
		std::cout << "Next year you will be " << age + 1 << "." << std::endl;
	}
	else if (age == 17)
	{
		std::cout << "Next year you will be able to vote." << std::endl;
	}
	else if (age > 70) 
	{
		std::cout << "Are you retired?" << std::endl;
	}
	else 
		std::cout << "I heard you just had a birthday and you are " << age << " years old. " << std::endl;

	std::cout << "Yours sincerely," << std::endl << std::endl;

	std::cout << "Harish";

}