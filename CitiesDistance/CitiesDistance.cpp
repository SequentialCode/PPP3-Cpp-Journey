/*
* Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given route. Compute and print the total distance (the sum of all distances). * Find and print the smallest and greatest distance between two neighboring cities. Find and print the mean distance between two neighboring cities.
*/


import std;

int main()
{
	std::vector<double> distances;
	double smallest{}, greatest{}, sum{};
	bool firstInput = true;
	for(double distance; std::cin >> distance; sum += distance)
	{
		distances.push_back(distance);
		if(firstInput)
		{
			smallest = greatest = distance;
			firstInput = false;
			continue;
		}
		if(distance < smallest)
			smallest = distance;
		if(distance > greatest)
			greatest = distance;

	}
	if(distances.size())
	{
		std::cout << "Total distance: " << sum << '\n';
		std::cout << "Smallest distance: " << smallest << '\n' << "Greatest distance: " << greatest << '\n';
		std::cout << "Mean distance: " << sum / distances.size() << '\n';
        }else
	{
		std::err << "Invalid input\n";
		return 1;
	}
	return 0;
	
}