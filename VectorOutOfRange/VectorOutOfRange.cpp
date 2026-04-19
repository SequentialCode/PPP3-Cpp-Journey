import std;

int main()
{
	std::vector<int> data;
	int input{};
	while(std::cin >> input)
		 data.push_back(input);
	for (int i = 0; i <= data.size(); ++i) //vector subscript operator does not perform bounds checking, so this will cause undefined behavior when i == data.size()
		std::cout << "index - " << i << " | value - " << data[i] << '\n';
}