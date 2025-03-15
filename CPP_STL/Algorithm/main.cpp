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


bool greater_than_50(int value)
{
	return value > 50;
}

void add_one(int& value)
{
	value++;
}

int main()
{
	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };
	vector<int> numbers = { 24, 13, 14, 88, 11, 19, 16, 23, 88, 9, 5, 24, 49, 88, 57, 4, 33 }; 
	vector<int> search = { 17,39,99, 57, 11, 12, 5 };
	vector<int> search_1 = {11, 24, 57 };
	vector<int> ages = { 34, 56, 29, 44, 56, 29, 56, 76, 12, 18, 39, 55, 72 };
	vector<int> copy_ages(13);
	vector<int> even = {2,4,6,8,10};
	vector<int> number_1 = { 1, 7, 3, 5, 9, 2 };
	vector<int> other = { 9, 7, 5, 3, 2, 1 };


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


	//An adjacent pair is a pair of elements that have the same value and are next to each other (adjacent) in the data range.
	
	auto it_5 = adjacent_find(numbers.begin(), numbers.end());

	if (it_5 != numbers.end())
	{
		cout << *it_5 << "  number appears more than once."<< endl;
	}
	else
	{
		cout << "There are no adjuscent number."<< endl;
	}	
	
	// Check that, if any number greater than 50 or not. 
	cout << "Check that, if any number greater than 50 or not." << endl;
	if (any_of(numbers.begin(), numbers.end(), greater_than_50))
	{
		cout << "Found a value greater than 50" << endl;
	}
	else
	{
		cout << "No values are greater than 50" << endl;
	}

	// Find out if a value exists in a sorted vector
	cout << "Find out if a value exists in a sorted vector : " << endl;
	if (binary_search(numbers.begin(), numbers.end(), 23))
	{
		cout << "The number 23 was found!"<< endl;
	}
	else 
	{
		cout << "The number 23 was not found."<< endl;
	}
	
	// Count how many times the number 88 appears in a vector:
	int amount = count(numbers.begin(), numbers.end(), 88);
	cout << "Number 88 appears " << amount << " times." << endl;

	// Count how many times a number greater than 50 appears in a vector:
	cout << "Count how many times a number greater than 50 appears in a vector: " << endl;
	int amount_1 = count_if(numbers.begin(), numbers.end(), greater_than_50);
	cout << "There are " << amount_1 << " values greater than 50."<< endl;

	//Fill a vector with a value:
	cout << "Fill a vector with a value: { ";
	fill(copy_ages.begin(), copy_ages.end(), 18);
	for (int age_1 : copy_ages)
	{
		cout << age_1 << " ";
	}
	cout<<" }\n\n";


	// Find a value greater than 50 in a vector:
	auto it_8 = find_if(numbers.begin(), numbers.end(), greater_than_50);
	if (it_8 != numbers.end()) 
	{
		cout << "The number " << *it_8 << " is greater than 50."<< endl;
	}
	else 
	{
		cout << "No numbers greater than 50 were found."<< endl;
	}

	// Find one of a number of values in a vector: find_first_of() 
	auto it_9 = find_first_of(numbers.begin(), numbers.end(), search.begin(), search.end());
	if (it_9 != numbers.end())
	{
		cout << "The number " << *it_9 << " was found!"<< endl;
	}
	else 
	{
		cout << "None of the values were found."<< endl;
	}
	
	// Find a value that is NOT greater than 50 in a vector:
	cout << "Find a value that is NOT greater than 50 in a vector: " << endl;
	auto it_10 = find_if_not(numbers.begin(), numbers.end(), greater_than_50);
	if (it != numbers.end()) 
	{
		cout << "The number " << *it_10 << " is not greater than 50."<< endl;
	}
	else 
	{
		cout << "All numbers are greater than 50."<< endl;
	}

	// Increase every number in a vector by one:
	for_each(even.begin(), even.end(), add_one);

	// Output the modified numbers
	cout << "Increase every number in a even number vector by one = { ";
	first = true;
	for (int e : even) 
	{
		if (!first)
		{
			cout << ", ";
		}
		cout << e;
		first = false;
	}
	cout << " }"<< endl;

	//Find out if the values 11, 24 and 57 exist in a vector:
	cout << "Find out if the values 11, 24 and 57 exist in a vector:  ";

	// Sort the numbers vector
	sort(numbers.begin(), numbers.end());

	// Check if search vector is included in numbers
	if (includes(numbers.begin(), numbers.end(), search_1.begin(), search_1.end())) 
	{
		cout << "Found";
	}
	else 
	{
		cout << "Not found";
	}

	// Find out if a vector is a permutation of another:
	cout << "Find out if a vector is a permutation of another: ";
	if (is_permutation(number_1.begin(), number_1.end(), other.begin())) 
	{
		cout << "Permutation found";
	}
	else 
	{
		cout << "No permutation found";
	}

	return 0;
}