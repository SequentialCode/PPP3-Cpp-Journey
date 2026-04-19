import std;

int main()
{
	try{
		std::vector<int> data;
		int input{};
		while(std::cin >> input)
			 data.push_back(input);
		for (int i = 0; i <= data.size(); ++i) 
			//std::cout << "index - " << i << " | value - " << data[i] << '\n'; // this will cause undefined behavior when i == data.size()
			std::cout << "index - " << i << " | value - " << data.at(i) << '\n'; // this will throw an out_of_range exception when i == data.size()
	}
	catch(std::out_of_range e)
	{
		std::cerr << "vector subscriptor accessing out of range elements";
		return 1;
	}
	catch(...)
	{
		std::cerr << "Something unknown went wrong";
		return 2;
	}
}