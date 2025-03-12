// STL - Algorithm

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool less_than_80(int value)
{
	return value < 80;
}


int main()
{
	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };
	vector<int> numbers = { 24, 13, 14, 11, 19, 16, 23, 88, 9, 5, 49, 57, 33 };
	vector<int> ages = { 34, 56, 29, 44, 56, 29, 56, 76, 12, 18, 39, 55, 72 };
	vector<int> copy_ages(13);

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

	// Sort numbers 
	sort(numbers.begin(), numbers.end());

	// Find the smallest number
	auto it_3 = min_element(numbers.begin(), numbers.end());
	cout << "The smallest number is : " << *it_3 << "\n\n";

	// Find the largest number
	
	auto it_4 = max_element(numbers.begin(), numbers.end());
	cout << "The Largest number is : " << *it_4 << "\n\n";

	// Alternative method: 
	// cout << "The Largest number is : " << *max_element(numbers.begin(), numbers.end()) << "\n\n";

	// Find the first value greater than 24 in the sorted vector.
	cout << "Find the first value greater than 24 in the sorted vector : ";
	auto it_2 = upper_bound(numbers.begin(), numbers.end(), 24);
	cout << *it_2 << "\n\n";

	
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

	// Search for the number 19
	auto it = find(numbers.begin(), numbers.end(), 19);
	
	if(it != numbers.end())
	{
		cout << "Number 19 Found in vector Numbers.\n\n";
	}
	else
	{
		cout << "Number 19 was not found in vector Number. \n\n";
	}

	// Search for the number 
	auto it_1 = find(numbers.begin(), numbers.end(), 38);

	if (it_1 != numbers.end())
	{
		cout << "Number 38 found in vector Numbers.\n\n";
	}
	else
	{
		cout << "Number 38 was not found in vector Numbers. \n\n";
	}

	// Display ages :
	cout << "Display ages :      { ";
	first = true;

	for (auto age : ages)
	{
		if (!first) cout << ", ";
		cout << age;
		first = false;
	}
	cout << " }\n\n";

	copy(ages.begin(), ages.end(), copy_ages.begin());

	// Display copy_ages :
	cout << "Display copy_ages : { ";
	first = true;

	for (auto age : copy_ages)
	{
		if (!first) cout << ", ";
		cout << age;
		first = false;
	}
	cout << " }\n\n";
	
	// Fill all elements in the numbers vector with the value 35
	fill(ages.begin(), ages.end(), 35);
	
	// Display ages :
	cout << "Filling all ages to 35 in vector ages : { ";
	first = true;

	for (auto age : ages)
	{
		if (!first) cout << ", ";
		cout << age;
		first = false;
	}
	cout << " }\n\n";

	// check wheather all ages are less 100 from vector.
	if (all_of(ages.begin(), ages.end(), less_than_80))
	{
		cout << "All the ages are less than 80.\n\n";
	}
	else
	{
		cout << "Some ages are not less than 80.\n\n";
	}

	return 0;
}