#include<iostream>
#include<string>
using namespace std;

enum level {
	LOW,
	MEDIUM,
	HIGH, 
	EXCELLENT
};

enum level_1 {
	LOW_1 = 7,
	MEDIUM_1,
	HIGH_1,
	EXCELLENT_1
};

enum level_2 {
	LOW_2 = 25,
	MEDIUM_2 = 50,
	HIGH_2 = 75,
	EXCELLENT_2 = 90
};

int main()
{
	enum level student_1 = HIGH;

	enum level_1 student_2 = EXCELLENT_1;

	enum level_2 student_3 = HIGH_2;

	cout << "Student 1 level : " << student_1<<endl;

	cout << "Student 2 level : " << student_2<< endl;

	cout << "Student 3 level : " << student_3 << endl;

	switch (student_1) 
	{
	case 1:
		cout << "Low Level";
		break;
	case 2:
		cout << "Medium level";
		break;
	case 3:
		cout << "High level";
		break;
	}

	return 0;
}