// Exceptional Handleing


#include<iostream>
#include<string>
using namespace std;

int main()
{
	try
	{
		int age;
		cout << "Enter your age : " << endl;
		cin >> age;

		if (age >= 18)
		{
			cout << "Access granted for You." << endl;
		}
		else
		{
			throw(age);
		}
	
	}
	catch (int myage)
	{
		cout << "Access denied." << endl;
		cout << "because your age is " << myage << " Years i.e. below 18 Years" << endl;
	}

	try {
		int num;
		cout << "Enter any even Number : " << endl;
		cin >> num;

		if (num % 2 == 0)
		{
			cout << "You entered even number." << endl;
		}
		else
		{
			throw 404;
		}

	}
	catch (int mynum)    // catch(...)  
	{
		cout << "You entered wrong number." << endl;
		cout << "Error code : " << mynum << endl;
	}

	return 0;
}