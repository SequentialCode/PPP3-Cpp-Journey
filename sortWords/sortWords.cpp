import std;
int main()
{
	std::cout << "Enter words: ";
	std::vector<std::string> words;
	for(std::string word; std::cin >> word;)
		words.push_back(word);
	std::ranges::sort(words);
	for(std::string word:words)
		std::cout << word << '\n';
}