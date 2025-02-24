#include<iostream>
using namespace std;

int main()
{   
	float Width, Length, Area;

	cout << "Enter width of Rectangle in Centimeter(cm) =  ";
	cin >> Width;
	cout << endl;

	cout << "Enter Length of Rectangle in Centimeter(cm) =  ";
	cin >> Length;
	cout << endl;
	
	cout << "Area of Rectangle  =  " << Width * Length << "  Centimeter Square" << endl;
	
	return 0;
}