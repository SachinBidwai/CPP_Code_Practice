#include<iostream>
using namespace std;

int main()
{
	// Double the given number in given range

	cout << "Double the given number in given range : " << endl;
	for (int i = 2; i <= 512; i *= 2)
	{
		cout << i << ", ";
	}

	cout << endl;

	// In Reverse order Double the given number in given range

	cout << "Double the given number in given range : " << endl;
	for (int i = 512; i >= 2; i /= 2)
	{
		cout << i << ", ";
	}

	cout << endl;

	return 0;
}