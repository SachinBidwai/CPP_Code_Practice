// STL - Algorithm

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };

	// Sort cars names in alphabetically Ascending order:
	sort(cars.begin(), cars.end());

	// Display cars 
	cout << "Sorting algorithm : Cars names arrange in alphabetically Ascending order: { ";
	bool first = true;

	for (string car : cars)
	{
		if (!first) cout << ", ";
		cout << car;
		first = false;
	}
	cout << " }\n\n";

	// Sort cars names in alphabetically Descending order:
	sort(cars.rbegin(), cars.rend());

	// Display cars 
	cout << "Sorting algorithm : Cars names arrange in alphabetically Descending order: { ";
	first = true;

	for (string car : cars)
	{
		if (!first) cout << ", ";
		cout << car;
		first = false;
	}
	cout << " }\n\n";

	return 0;
}