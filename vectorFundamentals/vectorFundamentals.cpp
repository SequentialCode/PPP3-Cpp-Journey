import std;

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };  // is initialized with the list of elements
	//print elements
	for (int i = 0; i < v.size(); ++i)
		std::cout << v[i] << '\n';
	std::cout << "-----\n";

	std::vector<int> v1(5); // has space for 5 elements, initialized to 0
	//print elements
	for(int i = 0; i < v1.size(); ++i)
		std::cout << v1[i] << '\n';
	std::cout << "-----\n";

	std::vector<int> v3 = {5, 7, 9, 4, 6, 8};
	//print elements - range for loop
	for(int i : v3)
		std::cout << i << '\n';
	std::cout << "-----\n";

	std::vector<double> temps;
	std::cout << "Enter temperatures for last few days: ";
	for(double temp; std::cin >> temp;)
		temps.push_back(temp);

	if(temps.size())
	{
		double sum = 0;
		for(double d : temps)
		{
			sum += d;
			std::cout << d << '\n';
		}
		std::cout << "-----\n";

		//calculate mean
		std::cout << "mean: " << sum / temps.size() << '\n';
		//calculate median
		std::ranges::sort(temps);
		std::cout << "median: " << temps[temps.size()/2] << '\n';	
		std::cout << "-----\n";
	
	}else
		std::cout << "You didn't enter any values for temperatures!\n";
}