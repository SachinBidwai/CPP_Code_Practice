#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*string name;
	cout << "Enter your Name : ";
	cin >> name;
	cout << "Your name is : " << name << endl; */

	string fullname;
	cout << "Enter your full name :";
	getline(cin, fullname);
	cout << "Your Full Name is : " << fullname << endl;

	char E[] = "C++ Code";
	cout << "char E[] : " << E << endl;

	string A = "Sachin";
	string B = "Bidwai";
	string C = A + " " + B;
	cout << "Concatination of string : " << C << endl;
	string D = A.append(B);
	cout << "String D is : " << D << endl;
	cout << "Length of D is : " << D.length() << endl;
	cout << "Size of D is  : " << D.size()<< endl;
	// cout << "Second Letter of String D : " << D[-1];
	cout << "String letter from last : " << D[D.length() - 3];

	cout << "Reverse String of  " << D << "  is : ";
	for (int i = 0; i < D.length()+1; i++)
	{
		cout << D[D.length() - i];
	}


	cout << endl;
	cout <<"A  : " << A << endl;
	A[1] = 'o';
	cout << A;
	return 0;
}