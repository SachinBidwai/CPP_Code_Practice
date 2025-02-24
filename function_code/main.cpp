#include<iostream>
#include<string>
#include "print_message.h"
#include "print_message_1.h"
using namespace std;


void print_txt()
{
	cout << "This function print without parameter." << endl;
}


void print_text(string message); // Function defination written after main() function. Here only declaration of function.


string print_text_1(string message)
{
	string mes = "This function Return string" + message;
	return mes;
}

string print_text_2(string& message_1)
{
	string mes_1 = "This function take value with reference"  + message_1;
	return mes_1;
}

string print_text_3(string* message_2)
{
	string mes_2 = "This function take value with pointer " + (*message_2);
	return mes_2;
}

string print_text_8(string message = " Default message about print.")
{
	string mes_8 = "This function Return string with default value." + message;
	return mes_8;
}

void student_info(string name, int age)
{
	cout << "Student name is " << name << endl;
	cout << "Student Age is " << age << endl;
}

void swapNumber(int& x, int& y) // Passing a variable by reference allows a function to modify its original value.
{
	int z = x;
	x = y;
	y = z;
}

void student_percentage_score(int marks[5])
{
	float sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += marks[i];
	}
	float percentage_marks = (sum / 5);

	cout << "Percentage of marks of Student : " << percentage_marks << " % " << endl;
}

// Function Overloading : ---------------------------------------------------

void numSum(int x, int y)
{
	cout << "Sum of " << x << " + " << y << " = " << x+y << endl;
}

void numSum(int x, double y)
{
	cout << "Sum of " << x << " + " << y << " = " << x + y << endl;
}

void numSum( double x, int y)
{
	cout << "Sum of " << x << " + " << y << " = " << x + y << endl;
}
void numSum(double x, double y)
{
	cout << "Sum of " << x << " + " << y << " = " << x + y << endl;
}
// ---------------------------------------------------------------------------------

// Recursive Function : ------------------------------------------------------------
int sum(int k)
{
	if (k > 0)
	{
		return k + sum(k - 1);
	}
	else
	{
		return 0;
	}
}



//---------------------------------------------------------------------------------


int main()
{
	print_txt();


	print_text("This is print function with parameter. ");


	string print_message = print_text_1(" and This is print function.");

	cout << print_message << endl;



	string info = "and This is print function.";

	string print_message_1 = print_text_2(info);

	cout << print_message_1 << endl;



	string info_1 = "and This is print function.";

	string print_message_2 = print_text_3(&info_1);

	cout << print_message_2 << endl;

	string info_2 = "and This is print function for message 4.";
	string print_message_4 = print_text_4(info_2);
	cout << print_message_4 << endl;

	string info_3 = "and This is print function for message 5.";
	string print_message_5 = print_text_5(info_3);
	cout << print_message_5 << endl;

	string print_message_6 = print_text_8(" I want to replace default print message. ");
	cout << print_message_6 << endl;

	string print_message_7 = print_text_8();
	cout << print_message_7 << endl;

	student_info("Kaustubh", 13);

	int first_number = 10; 
	int second_number = 20;

	cout << "Two numbers before swap are " << first_number << "  and  " << second_number << endl;

	swapNumber(first_number, second_number);

	cout << "Two numbers After swap are " << first_number << "  and  " << second_number << endl;

	int sub_marks[5] = { 60, 70, 80, 90, 56 };
	student_percentage_score(sub_marks);

	numSum(3, 6);
	numSum(3, 16.5);
	numSum(8.5, 25);
	numSum(12.7, 35.9);

	int result = sum(100);
	cout << "Sum of numbers from 1 to 100 is " << result << endl;

	return 0;
}

void print_text(string message)
{
	cout << message << endl;
}