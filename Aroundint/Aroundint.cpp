/* Aroundint.cpp : Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and val2.
Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user. */

import std;
using namespace std;
int main()
{
	cout << "Enter two integers: ";
	int val1, val2;
	cin >> val1 >> val2;

	if(val1 == val2)
	cout << "Both integers are equal.\n";
	else if	(val1 < val2)
	 cout << val1 << " is smaller than " << val2 << '\n';
	else
	 cout << val1 << " is larger than " << val2 << '\n';

	cout << "Sum: " << val1 + val2 << '\n';
	cout << "Difference: " << val1 - val2 << '\n';
	cout << "Product: " << val1 * val2 << '\n';
	double d1 = val1, d2 = val2;
	if(d2 != 0)
		cout << "Ratio: " << d1 / d2 << '\n';
	else
		cout << "Can't find ratio when val2 is zero";
}
