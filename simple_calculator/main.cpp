// Simple Calculator by using Switch Case

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double num1 = 0, num2 = 0;
	char op;

	cout << "Enter first number : ";
	cin >> num1;

	cout << "Enter an operator (+, -, *, /) : ";
	cin >> op;

	cout << "Enter second number : ";
	cin >> num2;
	
	switch (op)
	{
	case '+' :
		cout << "Addition of two numbers is : " << num1 + num2 << endl;
		break;

	case '-':
		cout << "Substraction of two numbers is : " << num1 - num2 << endl;
		break;

	case '*':
		cout << "Multiplication of two numbers is : " << num1 * num2 << endl;
		break;

	case '/':
		if (num2 != 0)
		{
			cout << "Division of two numbers is : " << num1/num2 << endl;
			break;
		}
		else
		{
			cout << "Second Number is Zero so we cannot divide by zero." << endl;
		}

	default:
		cout << "Invalid Operation." << endl;
	
	}

	return 0;
}