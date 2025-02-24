#include<iostream>
#include<string>
#include<fstream>
using namespace std;



class student
{
public:
	int Roll_Number;
	string Name;

	student();


	/*
	student()
	{
		Roll_Number = 007;
		Name = "Gems Bond";
	}
	*/

	~student()
	{
	}

	int sum()
	{
		return x + y;
	}

	string college_name(string str)
	{
		return "College Name  : " + str;
	}

private:
	int x = 20, y = 10;
	void print()
	{
		cout << y << endl;
	}
};                                                                                                                                                                                                                                     


class Exam_Score : public student
{
public: 
	float marks = 0;
	
	float score(float marks)
	{
		return marks;
	}
};

class grade :public Exam_Score
{
public:
	void fun_grade(float marks)
	{
		if (marks > 85)
		{
			cout << " Grade : A " << "\n" << endl;
		}
		else if(marks > 70)
		{
			cout << " Grade : B " << "\n" << endl;
		}
		else if (marks > 50)
		{
			cout << " Grade : C " << "\n" << endl;
		}
		else
		{
			cout << " Grade : D " << "\n" << endl;
		}
	}
};

// Declaration of Constructor outside the class
student ::student()
{
	Roll_Number = 007;
	Name = "Gems Bond";
}

class college_Library
{
public:
	void new_Book_Reg(string Name, int Book_Number);
};

void college_Library::new_Book_Reg(string Name, int Book_Number)
{
	cout << "Book Name : " << Name << "\n" << "Book Number : " << Book_Number << "\n"<< endl;
}

class car
{
public:
	float speed(int distance, int time);
};

float car::speed(int distance, int time)
{
	float speed = distance / time;
	return speed;
}

class Employee
{
private:
	int Salary;

public:
	void setSalary(int s)
	{
		Salary = s;
	}

	int getSalary()
	{
		return Salary;
	}
};

// Base class
class Employee_Info {
protected: // Protected access specifier
	int salary;
};

// Derived class
class Programmer : public Employee_Info {
public:
	int bonus;
	void setSalary(int s) 
	{
		salary = s;
	}
	int getSalary() 
	{
		return salary;
	}
};

class Animal
{
public:
	void Animal_Sound()
	{
		cout << "Animal make a sound \n" << endl;
	}
};

class pig : public Animal
{
public:
	void Animal_Sound()
	{
		cout << "The pig says: wee wee \n"<<endl;
	}
};

class dog : public Animal
{
public:
	void Aniaml_Sound()
	{
		cout << "The dog says: bow wow \n"<<endl;
	}
};



int main()
{
	student S1, S2;
	college_Library l1, l2;
	car C1, C2;
	Employee E1, E2;
	Exam_Score ES1, ES2;
	grade g1, g2;
	Programmer myObj;
	Animal myAnimal;
	pig mypig;
	dog mydog;

	myAnimal.Animal_Sound();
	mypig.Animal_Sound();
	mydog.Aniaml_Sound();

	myObj.setSalary(50000);
	myObj.bonus = 15000;
	cout << "Salary: " << myObj.getSalary() << "\n";
	cout << "Bonus: " << myObj.bonus << "\n" << endl;

	cout << S1.Name << endl;
	cout << S1.Roll_Number << endl;
	cout << "Private Variable Sum : " << S1.sum() << "\n" << endl;

	//ES1.new_Book_Reg("Swami", 1050);

	cout << ES1.college_name("Sinhgad College") <<"\nSum : "<< ES1.sum() << "\nRoll Number : " << ES1.Roll_Number << "\nName : " << ES1.Name << "\nScore : " << ES1.score(78)<< "\n" << g1.Name <<"\n" << "\n" << endl;
	

	S1.Roll_Number = 15;
	S1.Name = "Sachin";	
	string str_1 = S1.college_name("COEP College");
	
	S2.Roll_Number = 20;
	S2.Name = "Kaustubh";
	string str_2 = S2.college_name("MIT College");
	
	cout << "Student Roll Number : " << S1.Roll_Number <<"\n" << "Stuent Name : " << S1.Name << "\n" << str_1 << "\n" << endl;
	
	cout << "Student Roll Number : " << S2.Roll_Number << "\n" << "Stuent Name : " << S2.Name << "\n" << str_2<<"\n" << endl;

	l1.new_Book_Reg("Agni Pankh", 1009);
	l2.new_Book_Reg("Dip Stambh", 1020);

	cout << "Speed of Car 1 is : " << C1.speed(200, 4) << " Km/Hr." << endl;
	cout << "Speed of Car 2 is : " << C2.speed(450, 8) << " Km/Hr." << "\n" << endl;

	E1.setSalary(75000);
	cout << "Employee number 1 Salary is : " << E1.getSalary() << endl;

	E2.setSalary(90000);
	cout << "Employee number 2 Salary is : " << E2.getSalary() << endl;


	// Create and open a text file
	ofstream MyFile("File_Created.txt");

	// Write to the file
	MyFile << "Files can be tricky, but it is fun enough!";

	// Close the file
	MyFile.close();

	// Create a text string, which is used to output the text file
	string myText;

	// Read from the text file
	ifstream MyReadFile("File_Created.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (getline(MyReadFile, myText)) 
	{
		// Output the text from the file
		cout << myText;
	}

	// Close the file
	MyReadFile.close();

	try {
		int age = 15;
		if (age >= 18)
		{
			cout << "\n\n Access granted - you are old enough.\n"<< endl;
		}
		else
		{
			throw(age);  // throw 505;
		}
	}

	catch (int myNum)  // catch (...)  which will handle any type of exception
	{
		cout << "\n\n Access denied - You must be at least 18 years old.\n\n";
		cout << "Age is: " << myNum << "\n" << endl;
	}

	return 0;
}