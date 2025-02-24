#include<iostream>
#include<string>
using namespace std;

struct {

	int age;
	string name;
}student, student_1;


struct cars {
	string brand;
	string model;
	int year;
};


int main()
{
	cars car_1, car_2;
	car_1.brand = "BMW";
	car_1.model = "X5";
	car_1.year = 1999;

	car_2.brand = "Safari";
	car_2.model = "Racer";
	car_2.year = 2005;
	
	cout << "Car 1 info : " << endl;
	cout << "Car 1 Brand Name :" << car_1.brand << "\n" << "Car 1 Model Name : " << car_1.model << "\n" << "Car 1 Launch Year : " << car_1.year << endl;
	cout << "\n\n";

	cout << "Car 2 info : " << endl;
	cout << "Car 2 Brand Name :" << car_2.brand << "\n" << "Car 2 Model Name : " << car_2.model << "\n" << "Car 2 Launch Year : " << car_2.year << endl;
	cout << "\n\n";

	student.age = 21;
	student.name = "Amit";

	cout << "Student name is : " << student.name << endl;
	cout << "Student age is : " << student.age << endl;

	cout << "Enter student Name : ";
	cin >> student.name;

	cout << "Enter student age : ";
	cin >> student.age;

	cout << "You Entered following information about student : " << endl;
	cout << "Student name is : " << student.name << endl;
	cout << "Student age is : " << student.age << endl;


	cout << "Enter student_1 Name : ";
	cin >> student_1.name;

	cout << "Enter student_1 age : ";
	cin >> student_1.age;

	cout << "You Entered following information about student_1 : " << endl;
	cout << "Student_1 name is : " << student_1.name << endl;
	cout << "Student_1 age is : " << student_1.age << endl;


	return 0;
}