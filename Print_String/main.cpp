#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	int age;
	int item = 30;
	float cost_per_item = 15.23;
	//char currency = '?';

	cout << "Enter Your Name : ";
	cin >> name;
	cout << endl;

	cout << "Enter Your Age : ";
	cin >> age;
	cout << endl;


	cout << "\nYour Name is " << name << endl;
	cout << "\nYour Age is " << age << endl;
	//cout << "\nYour purches Bill is  : " << currency << " " << item * cost_per_item << endl;

	return 0;
}