// STL - Maps

#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	// Create a map that will store the name and age of different students
	map<string, int> students = { {"Kaustubh", 13}, {"Sachin", 42}, {"Ruthvij", 9}, {"Dipali", 37} };

	// Get the value associated with the key "Ruthvij"
	cout << "Ruthvij age is : " << students["Ruthvij"] << endl;

	// access elements with the .at() function:
	cout << "access elements with the .at() function : " << endl;
	cout << "Sachin age is : " << students.at("Sachin") << endl;

	// change the value associated with a key:
	
	cout << "Add elements to a map, it is ok to use square brackets[]: " << endl;
	students["Rahul"] = 39;
	students["Amit"] = 19;
	students["Rohini"] = 48;
	students.insert({ "Jyoti", 33 });
	students.insert({ { "Dinesh", 45 },{ "Aryan", 13 }, {"Prakash", 25} });
	students.emplace("Shwetank", 8); // A more efficient way to insert elements in Map. This avoids unnecessary copies.
	
	cout << "change the value associated with a key: " << endl;
	students["Sachin"] = 43;
	students.at("Rohini") = 44;

	for (const auto& student : students)
	{
		cout << student.first << " age is " << student.second << endl;
	}

	cout << "Student Map size is : "  << students.size() << endl;

	// To remove specific elements from a map, you can use the .erase() function:

	students.erase("Prakash");
	cout << "\nAfter removing Prakash from Map : " << endl;
	for (const auto& student : students)
	{
		cout << student.first << " age is " << student.second << endl;
	}

	cout << "Student Map size after erase one student is : " << students.size() << endl;


	// Check if "Sachin" and "Prakash" exist in the map
	// Define student names to check
	string studentNames[2] = { "Kaustubh", "Prakash" };

	// Iterate through the student names
	for (const string& name : studentNames) {
		if (students.count(name))     // // Outputs 1 (student exists)
		{
			cout << "\nStudent " << name << " exists in student Map." << endl;
		}
		else
		{
			cout << "\nStudent " << name << " does not exist in student Map." << endl;
		}
	}


	// To remove all elements from a map, you can use the .clear() function:

	students.clear();

	cout << "\nAfter removing all students from Map : ";
	cout << "{ ";
	for (const auto& student : students)
	{

		cout << student.first << " age is " << student.second << endl;
	}
	cout << " }"<< endl;

	cout << "Student Map size after erase all students is : " << students.size() << "\n\n";

	// You can also check if a specific element exists, by using the.count(key) function.
	// It returns 1 (true) if the element exists and 0 (false) otherwise:

		

	// Check if a Map is Empty
	cout << "\nCheck if a Map is Empty : " << endl;

	size_t s_3 = students.empty();

	switch (s_3)
	{
	    case 0 :
			cout << "\nStudents Map is not empty." << endl;
			break;

		case 1:
			cout << "\nStudents Map is empty " << endl;
			break;
	}

	// To reverse the order, you can use the greater<type> functor inside the angle brackets.

	map<string, int, greater<string>> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

	for (auto person : people) {
		cout << person.first << " is: " << person.second << "\n";
	}

	return 0;
}