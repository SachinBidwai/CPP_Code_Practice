#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	// Static Array : 
	cout << "Static Array : " << endl;

	int arr1[5] = {12, 18, 11, 29, 24};

	int size_1 = sizeof(arr1)/sizeof(arr1[0]);
	cout << "size_1 : " << size_1 << endl;
	
    
	for (int i = 0; i < size_1; i++)
	{
		cout << i << " = " << arr1[i]<<endl;
	}

	// ForEach Loop:
	cout << "Foreach Loop Output : " << endl;
	for (int i : arr1)
	{
		cout << i << endl;
	}
	
	string arr2[4] = { "Ant", "Cow", "Dog", "Cat"};
	int size_2 = sizeof(arr2)/sizeof(arr2[0]);
	cout << "size_2 : " << size_2<< endl;

	for (int i = 0; i < size_2; i++)
	{
		cout << i << " = " << arr2[i]<<endl;
	}

	// Dynamic Array : 

	cout << " Dynamic Array : " << endl;

	int* arr3 = new int[6];
	int x;
	cout << "Enter 6 integer number in array : " << endl;
	for (int i = 0; i < 6; i++)
	{
		cin >> x;
		arr3[i] = x;
	}


	for (int i = 0; i < 6; i++)
	{
		cout << i << " = " << arr3[i] << endl;
	}

	int size_of_array;

	cout << "Enter a size of an Array : " << endl;
	cin >> size_of_array;

	string* name = new string[size_of_array];
	
	cout << "Enter " << size_of_array <<" Names : " << endl;

	for (int i = 0; i < size_of_array; i++)
	{
		cin >> name[i];
	}

	for (int i = 0; i < size_of_array; i++)
	{
		cout << i << " = " << name[i] << endl;
	}

	
	// Free allocated memory
	delete[] name;


	// Vector : resizable array.

	cout << "Vector : resizable array. " << endl;
	vector<string> name_1 = { "Sachin", "Dipali" };
	
	cout << "Before Adding e" << sizeof(name_1);

	name_1.push_back("Kaustubh");
	name_1.push_back("Ruthvij");

	cout << sizeof(name_1);

	for (string i : name_1)
	{
		cout << i << endl;
	}

	return 0;
}