/* NumericalSequence.cpp
Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas. So,
if the user enters the values 10 4 6, the output should be 4, 6, 10. If two values are the same, they should just be ordered together. So, the input 4
5 4 should give 4, 4, 5.
*/

import std;
using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int val1, val2, val3;
	cout << "Enter three numbers: ";
	cin >> val1 >> val2 >> val3;
	if(val1 > val2)
		swap(val1, val2);
	if(val1 > val3)
		swap(val1, val3);
	// the first position has to be smallest now
	//check second positon
	if(val2 > val3)
		swap(val2, val3);
	cout << val1 << ", " << val2 << ", " << val3;

    return 0;
}