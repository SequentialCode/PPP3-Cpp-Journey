/* Find repeated words */

import std;
int main() 
{
	std::string currentWord;
	std::string previousWord;
	int words = 0, repeatedWords = 0;
	while (std::cin >> currentWord) 
	{
		++words;
		if (currentWord == previousWord)
		{
			++repeatedWords;
			std::cout << "Word number: " << words << ", repeated word: " << currentWord << " " << repeatedWords << std::endl;
		}
		previousWord = currentWord;
	}
	std::cout << "End of file, total words: " << words << ", repeated words: " << repeatedWords << std::endl;
}