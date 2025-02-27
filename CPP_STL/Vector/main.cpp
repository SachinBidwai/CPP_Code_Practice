// STL 
// Container : Vector

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };
	vector<int> numbers = { 10, 20, 30, 40, 50 };
	vector<double> weights = { 57.6, 48.3, 86.45, 59.5 };

	cout << "\nNumbers : " << "\n\n";
	for (int i : numbers)
	{
		cout << i << " , ";
	}

	cout << "\nWeights : " << "\n\n";
	for (double i : weights)
	{
		cout << i << " ,  ";
	}

	cout << "\nCars : " << "\n\n";
	for (string i : cars)
	{
		cout << i << ", ";
	}
	cout << "\n\n";
	cout << "cars[1] =  " << cars[1] << "\n\n";

	cout << "at() function : " << "\n\n";
	cout << "cars.at(2) =  " << cars.at(2) << "\n\n";

	cars[1] = "Honda";
	cout << "Assign New value to cars[1] = \"Honda\" " << "\n\n";

	for (string i : cars)
	{
		cout << i << ", ";
	}

	cout << "\n\nfront() : Get the first element. " << endl;
	cout << cars.front() << "\n\n";

	cout << "back() : Get the last element. " << endl;
	cout << cars.back() << endl;


	cout << "Insert an elements in an vector cars." << endl;
	cars.push_back("Tata");
	cars.push_back("Suzuki");

	cout << "After adding elements cars vector is : " << endl;
	for (string i : cars)
	{
		cout << i << ", ";
	}
	cout << "\n\n";
	
	cout << "Remove an elements in an vector cars." << endl;
	cars.pop_back();

	for (string i : cars)
	{
		cout << i << " , ";
	}
	cout << "\n\n";
	
	cout << "Vector cars Size : ";
	cout << cars.size() << "\n\n";
	
	cout << "Check wheather given vector os empty or not : if output is 1 then True and if output is 0 then false. " << endl;
	cout <<"Is cars empty : " << cars.empty() << endl;

	vector<string> names;

	cout << "Is names empty : " <<  names.empty() << endl;

	cout << "\n\n";

	for (int i = 0; i < cars.size(); i++)
	{
		cout << "cars[ " << i << " ] = " << cars[i] << endl;
	}
	cout << "\n\n";

	return 0;
}