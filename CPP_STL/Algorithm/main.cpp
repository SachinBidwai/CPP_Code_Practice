// STL - Algorithm

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };
	vector<int> numbers = { 24, 13, 14, 11, 19, 16, 23, 9, 5, 33 };

	// Sort cars names in alphabetically Ascending order:
	sort(cars.begin(), cars.end());

	// Display Cars names arrange in alphabetically Ascending order 
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

	// Display Cars names arrange in alphabetically Descending order
	cout << "Sorting algorithm : Cars names arrange in alphabetically Descending order: { ";
	first = true;

	for (string car : cars)
	{
		if (!first) cout << ", ";
		cout << car;
		first = false;
	}
	cout << " }\n\n";

	cout << "Initial Vector Number is  : { ";

	first = true;

	for (int num : numbers)
	{
		if (!first) cout << ", ";
		cout << num;
		first = false;
	}
	cout << " }\n\n";

	// Sort numbers numerically, starting from the fourth element
	sort(numbers.begin() + 3, numbers.end());


	cout << "Sort numbers numerically, starting from the fourth element : { ";

	first = true;

	for (int num : numbers)
	{
		if (!first) cout << ", ";
		cout << num;
		first = false;
	}
	cout << " }\n\n";

	return 0;
}