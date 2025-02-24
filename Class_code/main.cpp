#include<iostream>
#include<string>
using namespace std;


class employee
{
    private:
	    int salary;

    public:
		void setSalary(int s)
		{
			salary = s;
		}

		int getsalary()
		{
			return salary;
		}
};

class Car {        // The class
public:          // Access specifier
	string brand;  // Attribute
	string model;  // Attribute
	int year;      // Attribute
	Car(string x, string y, int z) {  // Constructor with parameters
		brand = x;
		model = y;
		year = z;
	}

	
	// Copy Constructor
	Car(const Car &obj)
	{
		brand = obj.brand;
		model = obj.model;
		year = obj.year;
		cout << "Copy Constructor Called : " << endl;
	} 

	void show()
	{
		cout << "Car Show() function Called : " << endl;
		cout << "\nCar brand : " << brand << " , " << " Model : " << model << " . " << " Year : " << year << endl;
	}

	void display(Car c)   // // Copy constructor is called here
	{
		cout << "Car Display()  function Called : " << endl;
		c.show();
	}
};


class student {
	public: 
		int Roll_number, marks[5];
		string name, subject;

		student()
		{
			name = "Rahul";
			Roll_number = 37;
			cout << "Default constructor Called ."<< endl;
			// cout << "Student name : " << name << " , "<<" Roll Number : " << Roll_number << endl;
		}
				
		student(string x, int y); // Construction Declaration.
		
		~student()
		{

		}

		void show()
		{
			cout << "\nStudent Name : " << name << " , " << "Roll Number : " << Roll_number << endl;
		}
		
		void percentage_score(string& name , int& Roll_number , int marks[5])
		{
			float sum = 0;
			for (int i = 0; i < 5; i++)
			{
				sum += marks[i];
			}
			float result = sum / 5;
			cout << "\nPercentage score of " << name << " , " << " Roll Number : " << Roll_number << " , " << " % Score is : " << result << " % " << endl;
 		}

		void student_info(int Roll_number, string name);
};

void student::student_info(int Roll_number, string name)
{
	cout << "\nStudent Name : " << name << "  ,  " << " Roll Number : " << Roll_number << endl;
}

student::student(string x, int y)
{
	name = x;
	Roll_number = y;
	cout << "constructor with Parameter Called ." << endl;
}

int main()
{

	employee e1;
	e1.setSalary(50000);
	cout << "Salary of Employee is : " << e1.getsalary() << endl;

	// Create Car objects and call the constructor with different values
	Car carObj1("BMW", "X5", 1999);
	
	Car carObj2("Ford", "Mustang", 1969);

	// Print values
	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
	
	// Copy constructor Called : 

	// OR  Car carObj3 = carObj2; Anather way to call copy constructor.
	Car carObj3(carObj2); // Copy constructor is called (car3 is created as a copy of car2)
	
	// OR  Car carObj4 = carObj1; Anather way to call copy constructor.
	Car carObj4(carObj1); // Copy constructor is called (car4 is created as a copy of car1)
	
	cout << "Copy Constructor carObj3 is created : " << endl;
	cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n";

	cout << "Copy Constructor carObj4 is created : " << endl;
	cout << carObj4.brand << " " << carObj4.model << " " << carObj4.year << "\n";

	carObj1.display(carObj2);
	
	student s1, s2;
	s1.show();
	student s3("Kaustubh", 10);
	student s4("Ruthvij", 8);
	s1.show();
	s3.show();
	s4.show();

	string name;
	int roll_num;

	s1.student_info(24, "Kaustubh");
	s2.student_info(18, "Ruthvij");

	cout << "Enter Student Name : " << endl;
	cin >> name;

	cout << "Enter Roll Number : " << endl;
	cin >> roll_num;

	cout << "Enter student 5 subject marks out of 100 : " << endl;

	int* my_score = new int[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> my_score[i];
	}

	s1.percentage_score(name, roll_num, my_score);


	return 0;
}