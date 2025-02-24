#include<iostream>
#include<string>
using namespace std;

int main()
{
	int time;
	cout << "Enter time in Between 0 to 24 Hours : ";
	cin >> time;
	string result = (time < 18) ? "Good Day" : "Good Evening";
	cout << result;

	if (time < 12)
	{
		cout << "\nGood Morning ! "<< endl;
	}
	else if (time < 18)
	{
		cout << "\nGood Afternoon ! " << endl;
	}
	else
	{
		cout << "\nGood Evening ! " << endl;
	}

	int i = 0;
	while (i < 5)
	{
		cout << "i = "<< i<<endl;
		i++;
	}

	int j = 0;
	do
	{
		cout << j << endl;
		j++;
	} while (j < 5);


	return 0;
}