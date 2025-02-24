#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a more than 3 digit number to reverse that number : ";
	cin >> num;

	int reverse_num = 0;

	while (num)
	{
		reverse_num = reverse_num * 10 + num % 10;

		num = num / 10;
	}

	cout << "Reverse Number is : " << reverse_num;
	
	return 0;
}