import std;
int main()
{
	std::cout << "Enter words: ";
	std::vector<std::string> words;
	for(std::string word; std::cin >> word;)
		words.push_back(word);
	std::ranges::sort(words);
	for(int i = 0; i < words.size(); ++i)
	{
		if(i == 0 || words[i] != words[i-1])
			std::cout << words[i] << '\n';
	}

}