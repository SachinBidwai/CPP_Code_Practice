#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "How many number you want to arrange? " << endl;
	cin >> n;

	int* arr_1 = new int[n];

	cout << " Enter any " << n << " numbers." << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr_1[i];
	}

	cout << "You entered following numbers : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << endl;
	}

	int Lowest_elem = arr_1[0];

	for (int i = 1; i < n; i++)
	{
		if (Lowest_elem > arr_1[i])
		{
			Lowest_elem = arr_1[i];
		}

	}

	cout << "Lowest element is : " << Lowest_elem << endl;


	int Highest_elem = arr_1[0];

	for (int i = 1; i < n; i++)
	{
		if (Highest_elem < arr_1[i])
		{
			Highest_elem = arr_1[i];
		}

	}

	cout << "Highest element is : " << Highest_elem << endl;

	delete[] arr_1;

	return 0;
}