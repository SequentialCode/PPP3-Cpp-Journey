/*
* The character 'b' is char(’a’+1), 'c' is char(’a’+2), etc. Use a loop to write out a
  table of characters with their corresponding integer values:
	a 97
	b 98
	...
	z 122
*/

import std;

int main()
{

	char c = 'a';
	while( c <= 'z')
	{
		std::cout << c << '\t' << (int) c << '\n';
		c++;
	}
	
}