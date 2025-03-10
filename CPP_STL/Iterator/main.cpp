// STL - Iterator

#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
	// Create Container : 
	
	// Create a vector called cars that will store strings
	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };

	// Create a vector called cars that will store strings
	list<string> names = { "Sachin", "Kaustubh", "Dipali", "Ruthvij" };



	// Create iterator: 
	
	// Create a vector iterator called it
	vector<string> ::iterator it;

	// Create a list iterator called it_1
	list<string> ::iterator it_1;


	// Display Container : 
	
	// Loop through the vector with the iterator
	cout << "\nNames from Vector Cars : " << endl;
	for (it = cars.begin(); it != cars.end(); ++it)
	{
		cout << *it << endl;
	}


	// Loop through the vector with the iterator
	cout << "\nNames from list names : " << endl;
	for (it_1 = names.begin(); it_1 != names.end(); ++it_1)
	{
		cout << *it_1 << endl;
	}


	return 0;
}