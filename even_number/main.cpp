#include<iostream>
#include "even.h"
using namespace std;

int main()
{
	int num;
	cout << "Enter a number to check even or odd." << endl;
	cin >> num;

	check_even(num);

	return 0;
}

