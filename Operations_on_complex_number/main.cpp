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

	//multiply
	complex multiply(complex other)
	{
		double r = real * other.real - imag * other.imag;
		double i = real * other.imag + imag * other.real;
		return complex(r, i);
	}

	// Division
	complex divide(complex other)
	{
		complex result;
		double denominator = other.real * other.real + other.imag * other.imag;

		if (denominator == 0)
		{
			cout << "Error: Division by zero complex number!" << endl;
			return result;
		}

		result.real = (real * other.real + imag * other.imag) / denominator;
		result.imag = (imag * other.real - real * other.imag) / denominator;
		return result;
	}

	// Modulus
	double modulus()
	{
		return sqrt(real * real + imag * imag);
	}

	// Argument in radians
	double argument()
	{
		return atan2(imag, real);
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
	complex multiply = c1.multiply(c2);
	complex quotient = c1.divide(c2);

	cout << "Result of Addition : ";
	sum.display();

	cout << "Result of Subtraction : ";
	sub.display();

	cout << "Result of Multiplication : ";
	multiply.display();

	cout << "Result of division : ";
	quotient.display();

	cout << "Modulus of first complex Number is : " << c1.modulus()<< endl;
	cout << "Modulus of Second complex Number is : " << c2.modulus()<< endl;

	cout << "Argument of first complex Number is : " << c1.argument() << endl;
	cout << "Argument of Second complex Number is : " << c2.argument() << endl;

}

