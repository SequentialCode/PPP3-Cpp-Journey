/*
* Write a program that “bleeps” out words that you don’t like; that is, you read in words using cin and print them again on cout. 
If a word is among a few you have defined, you write out BLEEP instead of that word. Start with one “disliked word” such as
string disliked = "Broccoli";
When that works, add a few more.
*/
import std;

int main()
{
	std::vector<std::string> words;
	std::vector<std::string> bleeps = { "Broccoli", "Bad", "Evil", "Crazy", "bad", "evil"};
	std::cout << "Enter words: ";
	for (std::string word; std::cin >> word;)
	{
		bool bleepWord = false;
		for (std::string bleep : bleeps)
		{
			if (word == bleep)
			{
				bleepWord = true;
				break;
			}
		}
		if (bleepWord)
			words.push_back("BLEEP");
		else
			words.push_back(word);
	}
	for (std::string word : words)
		std::cout << word << ' ';
	std::cout << std::endl;

}