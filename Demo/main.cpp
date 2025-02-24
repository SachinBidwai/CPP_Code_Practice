#include<iostream>
#include<string>
using namespace std;

enum Level 
{
	LOW,
	MEDIUM,
	HIGH
};

enum Level_1
{
	LOW_1 = 40,
	MEDIUM_1 = 75,
	HIGH_1 = 100
};

enum Level_2
{
	LOW_2 = 6,
	MEDIUM_2,
	HIGH_2
};

struct
{
	int myRollNum;
	string myName;

}student, student1;

struct StudentData
{
	int myRollNum;
	string myName;
};

int main()
{
	student.myRollNum = 16;
	student.myName = "Sachin";

	student1.myRollNum = 19;
	student1.myName = "Rahul";

	StudentData s1, s2;
	s1.myRollNum = 24;
	s1.myName = "Kaustubh";

	s2.myRollNum = 26;
	s2.myName = "Ruthvij";

	cout << "Student Roll number is  " << student.myRollNum << " and Name is " << student.myName << endl;
	cout << "Student Roll number is  " << student1.myRollNum << " and Name is " << student1.myName << endl;

	cout << "Student Roll number is  " << s1.myRollNum << " and Name is " << s1.myName << endl;
	cout << "Student Roll number is  " << s2.myRollNum << " and Name is " << s2.myName << endl;

	enum Level myLevel = HIGH;
	cout << "My Level  : " << myLevel << endl;
	
	enum Level_1 myValue = HIGH_1;
	cout << "My Value : " << myValue << endl;

	enum Level_2 myValue_1 = HIGH_2;
	cout << "My Value_1 : " << myValue_1 << endl;

	string food = "Banana";
	string &meal = food;
	string* ptr = &food;

	cout << "Food : " << food << endl;
	cout << "Meal : " << meal << endl;
	cout << "&Meal : " << &meal << endl;
	cout << "&Food : " << &food << endl;
	cout << " Pointer  : " << ptr << endl;
	cout << " *Pointer  : " << *ptr << endl;

	*ptr = "Mango"; 
	cout << " Changed  *Pointer  : " << *ptr << endl;

	return 0;
}