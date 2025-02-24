#include<iostream>
#include<string>
using namespace std;

int main()
{
	string fullName;
	cout << "Enter your Full Name : " << endl;
	getline(cin, fullName);

	cout <<"\n\n" << fullName << endl;

	return 0;
}