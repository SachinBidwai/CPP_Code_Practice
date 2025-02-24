#include<iostream>
using namespace std;

int main()
{
	int arr[6] = {7,8,2,3,4,9};

	/*
	int* arr = new int[6];

	cout << "Enter array elements : ";

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	/*
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i]<< ", ";
	}*/

	
	for (int i : arr)
	{
		cout << i << ", ";
	}
	

	return 0;
}