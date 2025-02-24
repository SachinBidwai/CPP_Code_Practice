#include<iostream>
using namespace std;

int main()
{
	int a=0, b=0, c=0, n = 0;

	cout << "Enter first element for Fibbonacy series a : ";
	cin >> a;

	cout << "Enter Second element for Fibbonacy series b : ";
	cin >> b;

	cout << "How many term you want in Fibbonacy series : ";
	cin >> n;

	cout << "\n\nFibonacy Series is : " << a << ", " << b << ", "; 

	for (int i = 0; i < n; i++)
	{
		c = a + b;
		cout << c << ", ";
		a = b;
		b = c;
	}

	cout << "... ... ... ... ...";

	return 0;
}