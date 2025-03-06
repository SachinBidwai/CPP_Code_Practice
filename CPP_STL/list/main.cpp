// STL : List

#include<iostream>
#include<string>
#include<list>
using namespace std;


int main()
{
	list<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };
	cout << "{ ";
	for (string car : cars)
	{
		cout << car << ", ";
	}
	cout << " }";
	cout << "\n\n";

	cout << "Car List front element : " << cars.front()<< endl;
	cout << "Car List Back element : " << cars.back()<< endl;

	cout << "Change a List Element : " << endl;
	cars.front() = "Honda";
	cars.back() = "i20";

	cout << endl << "{ ";
	for (string car : cars)
	{
		cout << car << ", ";
	}
	cout << " }";
	cout << "\n\n";

	cout << "Add List Elements : " << endl;
	cars.push_front("Tesla");
	cars.push_back("Suzuki");

	cout << endl << "{ ";
	for (string car : cars)
	{
		cout << car << ", ";
	}
	cout << " }";
	cout << "\n\n";


	cout << "Remove List Elements : " << endl;
	cars.pop_front();
	cars.pop_back();

	cout << endl << "{ ";
	for (string car : cars)
	{
		cout << car << ", ";
	}
	cout << " }";
	cout << "\n\n";

	// cout << "List Size : " << endl;



	return 0;
}