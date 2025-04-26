// Operations on Complex numbers

#include <iostream>
#include <cmath>
using namespace std;

class complex
{
public:
	double real;
	double imag;

	// constructor
	complex(double r = 0, double i = 0)
	{
		real = r;
		imag = i;
	}

	// Display
	void display()
	{
		cout << real;
		if (imag > 0)
		{
			cout << " + " << imag << "i" << endl;
		}
		else
		{
			cout << " - " << -imag << "i" << endl;
		}
	}

	// Addition
	complex add(complex other)
	{
		return complex(real + other.real, imag + other.imag);
	}

	// Subtract
	complex subtract(complex other)
	{
		return complex(real - other.real, imag - other.imag);
	}
};

int main()
{
	complex c1, c2;

	cout << "Enter real and imaginary parts of first complex number: ";
	cin >> c1.real >> c1.imag;
	c1.display();

	cout << "Enter real and imaginary parts of second complex number: ";
	cin >> c2.real >> c2.imag;
	c2.display();

	complex sum = c1.add(c2);
	complex sub = c1.subtract(c2);

	cout << "Sum : ";
	sum.display();

	cout << "Subtraction : ";
	sub.display();
}

