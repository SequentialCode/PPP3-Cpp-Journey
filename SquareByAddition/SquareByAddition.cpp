/*
* Implement square() without using the multiplication operator; that is, do the x*x by repeated addition (start a variable result at 0 and
* add x to it x times).
*  Then run some version of “the first program” using that square().
*/
import std;
int square(int x)
{
	int result = 0;
	int counter = x;
	while (counter)
	{
		result += x;
		--counter;
	}
	return result;
}

int main()
{
	for (int x = 1; x < 100; ++x)
		std::cout << x << '\t' << square(x) << '\n';
	return 0;
}