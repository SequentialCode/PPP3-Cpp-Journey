/*
* A program that converts yen ('y'), kroner ('k'), and pounds ('p') into dollars.
*/

import std;
std::string GetUnit(double money, std::string singular, std::string plural)
{
	return (money == 1) ? singular : plural;
}
int main()
{
	double money = 0.0;
	char unit = ' ';
	std::string singular_input;
	std::string plural_input;
	double converted_money = 0.0;
	constexpr double yen_to_dollars = 0.0063;
	constexpr double kroner_to_dollars = 0.10;
	constexpr double pounds_to_dollars = 1.33;
	constexpr double francs_to_dollars = 1.25;
	std::cout << "Please enter number of yens(y)/kroner(k)/pounds(p)/francs(f) followed by the currency (y or k or p or f):\n";

	if(!(std::cin >> money >> unit))
	{
		std::cerr << "Invalid input format.";
		return 1;
	}

	switch(unit)
	{
		case 'y':
			singular_input = " yen";
			plural_input = " yens";
			converted_money = money*yen_to_dollars;
		break;
		case 'k':
			singular_input = " kroner";
			plural_input = " kroners";
			converted_money = money * kroner_to_dollars;
		break;
		case 'p':
			singular_input = " pound";
			plural_input = " pounds";
			converted_money = money * pounds_to_dollars;
		break;
		case 'f':
			singular_input = " frank";
			plural_input = " franks";
			converted_money = money * francs_to_dollars;		
		break;
		default:
			std::cerr << "Sorry, I don't recognize that unit - " << unit << "!\n";
	     		return 1;
		break;
	}

	std::cout << money << GetUnit(money, singular_input, plural_input) << " == " << converted_money << GetUnit(converted_money, " dollar", " dollars");

	return 0;	
}