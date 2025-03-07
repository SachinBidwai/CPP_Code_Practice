// STL : Deque

#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main()
{
	deque<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };

	//std::deque::size(), std::vector::size(), etc., return size_t, not int.
	// size_t (short for "size type") is an unsigned integer type used to represent sizes or indices in memory. 
	// It is commonly used for array indexing, loop counters, and memory sizes.
	//  size_t is non-negative, making it ideal for sizes, indices, and memory calculations.
	cout << "{ ";
	for (size_t i = 0; i < cars.size(); i++)   
	{
		cout << cars[i];
		if (i != cars.size() - 1)
		{
			cout << ", ";
		}
	}
	cout << " }"<< endl;
	
	cout << "Access a Deque elements : " << endl;
	cout << "cars[0] : " << cars[0] << endl;
	cout << "cars[1] : " << cars[1] << endl;
	cout << "cars[2] : " << cars[2] << endl;
	cout << "cars[3] : " << cars[3] << endl;

	cout << "Car deque front element : " << cars.front() << endl;
	cout << "Car deque Back element : " << cars.back() << endl;

	// .at() function
	cout << ".at() function : " << endl;
	cout << "cars.at(1) : " << cars.at(1) << endl;
	cout << "cars.at(2) : " << cars.at(2) << endl;


	cout << "Change a Deque first Element : " << endl;
	cars[0] = "Honda";

	cout << "{ ";
	for (size_t i = 0; i < cars.size(); i++)
	{
		cout << cars[i];
		if (i != cars.size() - 1)
		{
			cout << ", ";
		}
	}
	cout << " }" << endl;

	// Add Deque Elements :

	cout << "Add Deque Elements : " << endl;
	cars.push_front("Suzuki");
	cars.push_back("Hero");

	cout <<"cars.size() : "<< cars.size()<< endl;

	cout << "{ ";
	for (size_t i = 0; i < cars.size(); i++)
	{
		cout << cars[i];
		if (i != cars.size() - 1)
		{
			cout << ", ";
		}
	}
	cout << " }" << endl;


	cout << "Remove Deque Elements : " << endl;
	cars.pop_front();
	cars.pop_back();

	cout << "{ ";
	for (size_t i = 0; i < cars.size(); i++)
	{
		cout << cars[i];
		if (i != cars.size() - 1)
		{
			cout << ", ";
		}
	}
	cout << " }" << endl;

	int j = cars.empty();

	switch (j)
	{
	case 0: 
		cout << "Deque Cars is not empty."<< endl;
		break;
	case 1: 
		cout << "Deque Cars is empty." << endl;
		break;
	}

	return 0;
}