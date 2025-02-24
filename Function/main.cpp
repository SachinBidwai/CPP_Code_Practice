#include<iostream>
#include<string>
using namespace std;

void myname()
{
	cout << "My name is Sachin " << endl;
}

string name_1()
{
	string name_1;
	cout << "Enter your Name :";
	cin >> name_1;
	return name_1;
}

void myFunction(string country = "Norway") 
{
	cout << country << endl;
}

void studentInfo(string name, int age)
{
	cout << "Student name is : " << name << " and age is : " << age << endl;
}

void yourName(string name);

void swapNumber(int &x, int &y)
{
	int z = x;
	x = y;
	y = z;
}

string modifiedString(string &str)
{
	str += " word";
	return str;
}

void myNumber(int numArray[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << numArray[i] << endl;
	}
}

int addFunc(int x, int y)
{
	return x + y;
}

double addFunc(double x, double y)
{
	return x + y;
}

int sum(int num)
{
	if (num > 0)
	{
		return num + sum(num - 1);
	}
	else
	{
		return 0;
	}
}

int factorial(int num)
{
	if (num > 0)
	{
		return num * factorial(num - 1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	myname();
	yourName("Kaustubh");
	yourName("Ruthvij");
	myFunction("India");
	myFunction();
	studentInfo("Amit", 21);
	studentInfo("Dipali", 37);
	int add1 = addFunc(7, 9);
	cout << "Integer Number Addition : " << add1 << endl;
	double add2 = addFunc(3.5, 7.9);
	cout << "Decimal number Addition : " << add2 << endl;

	int nArray[5] = {10, 20, 30, 40, 50};
	myNumber(nArray);

	string greeting = "Hello";
	string newStr = modifiedString(greeting);
	cout << newStr << endl;

	string x = name_1();
	cout << "Your name is : " << x << endl;

	cout << "Enter two numbers to swap Numbers : " << endl;
	int num_1, num_2;
	cout << " Enter first number : ";
	cin >> num_1;
	cout << " Enter second number : ";
	cin >> num_2;

	cout << "Numbers before swap : " << endl;
	cout << num_1 << "   " << num_2 << endl;

	swapNumber(num_1, num_2);

	cout << "Numbers After swap : " << endl;
	cout << num_1 << "   " << num_2 << endl;

	int num_3;
	cout << "Enter number : " << endl;
	cin >> num_3;
	int result = sum(num_3);
	cout << "Sum of 1 to "<< num_3 << " is : "<< result << endl;
		
	// Factorial of any number

	int num_4;
	cout << "Enter a number to find its factorial : " << endl;
	cin >> num_4;
	int result_1 = factorial(num_4);
	cout << "Factorial of Number " << num_4 << " is  : " << result_1 << endl;

	return 0;
}

void yourName(string name)
{
	cout << "You entered name : " << name << endl;
}
