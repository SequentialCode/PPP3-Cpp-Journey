/*
* Rewrite the character value example from the previous TRY THIS to use a for-statement. Then modify your program to also write out a table of the
 integer values for uppercase letters and digits.
*/

import std;

int main()
{

	
	for(char c = 'A'; c <= 'Z'; ++c)
	{
		std::cout << c << '\t' << (int) c << '\n';
	}
	
}