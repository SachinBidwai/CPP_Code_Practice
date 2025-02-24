#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int a, b, d = 7;
	float c;

	cout << "Find Max and Min from given two numbers" << endl;
	cout << "Enter first Number : ";
	cin >> a;
	cout << "Enter second Number : ";
	cin >> b;
	cout << "Enter fractional Number : ";
	cin >> c;
	cout << "Max Number : " << max(a, b)<<endl;
	cout << "Min Number : " << min(a, b)<< endl;

	cout << "Square root of " << a << " is : " << sqrt(a) << endl;
	cout << "Natural logarithm of " << a << " is " << log(a) << endl;
	cout << "Round up of " << c << " is : " << round(c) << endl;

	cout << (d == 8) << endl;
	cout << (d == 7) << endl;

	if (a > b)
	{
		cout << a << " is Greater than " << b << endl;
	}
	else
	{
		cout << a << " is Less than " << b << endl;
	}

	int time = 15;
	if (time < 10) 
	{
		cout << "Good morning."<< endl;
	}
	else if (time < 20) 
	{
		cout << "Good day."<< endl;
	}
	else 
	{
		cout << "Good evening."<< endl;
	}

	string result = (time < 20) ? "Good Day." : "Good evening.";
	cout << result << endl;

	int myNum = -10; // Is this a positive or negative number?

	if (myNum > 0) {
		cout << "The value is a positive number.\n";
	}
	else if (myNum < 0) {
		cout << "The value is a negative number.\n";
	}
	else {
		cout << "The value is 0.\n";
	}

	int myNum1 = 5;

	if (myNum1 % 2 == 0) {
		cout << myNum1 << " is even.\n";
	}
	else {
		cout << myNum1 << " is odd.\n";
	}

	int day = 3;
	switch (day)
	{
	case 1:
		cout << "Monday "<< endl;
		break;
	case 2: 
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	case 7: 
		cout << "Sunday" << endl;
		break;
	}

	int j = 0;
	while (j < 6)
	{
		cout << j << endl;
		j++;
	}

	int k = 9;
	do {
		cout << k << endl;
		k++;
	} 
	while (k < 15);

	int countdown = 5;
	while (countdown >= 0)
	{
		cout << countdown << endl;
		countdown--;
	}
	cout << "Happy New Year !" << endl;

	// reverse number
	int num_1 = 0;
	
	cout << "Reverse the Given Number : "<< endl;
	cout << "Enter any integer number greter than one digit number to reverse that number:" << endl;
	cin >> num_1;
	cout << "You entered number :" << num_1 << endl;

	int rev_num = 0;

	while (num_1)
	{
		rev_num = rev_num * 10 + num_1 % 10;
		num_1 /= 10;
	}

	cout << "Reverse Number of Given number  is : " << rev_num << endl;


	// Dice Game : 

	int dice = 1;

	while (dice <= 6) {
		if (dice < 6) {
			cout << "No Yatzy\n";
		}
		else {
			cout << "Yatzy!\n";
		}
		dice = dice + 1;
	}


	cout << "For Loop  OutPut : "<< endl;

	for(int l = 0; l <= 5; l++)
	{
		cout << l << endl;
	}

	int marks[] = { 89,76,88,79,69,98 };
	for (int i : marks)
	{
		cout << i << endl;
	}

	for (int m = 2; m <= 512; m *= 2)
	{
		cout << m << endl;
	}
	
	int number = 2;

	for (int i = 1; i <= 10; i++)
	{
		cout << number << " X " << i << " = " << number * i << endl;
	}

	vector<string> cars = {"volvo","BMW","Farari"};

	cars.push_back("Tesla");

	for (auto car : cars)
	{
		cout << car << endl; 
	}

	// Find Average Age

	int ages[10] = {24,25,65,15.25,56,34,26,67,45};

	int length = sizeof(ages) / sizeof(ages[0]);

	int sum = 0;

	for (int age : ages)
	{
		sum += age;
	}

	float avg = sum / length;

	cout << "Average Age is : " << avg << endl;


	int n, element;
	vector<int> vec;

	cout << "Enter the number of elements for vector : " << endl;
	cin >> n;

	cout << "Enter " << n << " Elements for vector : "<< endl;

	for (int i = 0; i < n; i++)
	{
		cin >> element;
		vec.push_back(element);
	}

	cout << "You eneter vector : " << endl;
	cout << " { ";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << " } " << endl;

	cout << " 2 diamensional matrix : [2][4]" << endl;

	string letters[2][4] = 
	{
      { "A", "B", "C", "D" },
      { "E", "F", "G", "H" }
	};

	cout << " { "<< endl;
	for (int i = 0; i < 2; i++) 
	{
		cout << "     { ";
		for (int j = 0; j < 4; j++) 
		{
			cout << " \" " << letters[i][j] << " \" " << " ";
			if (j == 3)
			{
				break;
			}
		}
		cout << " } " << " , "<< endl;
	}
	cout << " } " << endl;

	cout << " 3 diamensional matrix : [2][2][2]" << endl;

	string letters_1[2][2][2] = 
	{
     {
	   { "A", "B" },
	   { "C", "D" }
     },
     {
	   { "E", "F" },
	   { "G", "H" }
     }
	};

	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 2; j++) 
		{
			for (int k = 0; k < 2; k++)
			{
				cout << " \" " << letters_1[i][j][k] << " \" " << " ";
				if (k == 1)
				{
					cout << endl;
				}
			}
			if (j == 1)
			{
				cout << endl;
			}
		}
	}

	return 0;
}