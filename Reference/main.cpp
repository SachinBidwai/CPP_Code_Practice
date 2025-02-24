#include<iostream>
#include<string>
using namespace std;

/* References and Pointers (which you will learn about in the next chapter) are important 
in C++, because they give you the ability to manipulate the data in the computer's memory 
- which can reduce the code and improve the performance. 
These two features are one of the things that make C++ stand out 
from other programming languages, like Python and Java.
*/

int main()
{
	string food = "Mango";
	string &meal = food; // Reference variable : A reference to an existing variable.
	string* ptr = &meal;   // it creates a pointer variable.
	string* ptr_1 = &food; // it creates a pointer variable.
	

	cout << "Food : " << food<< endl;
	cout << "Meal : " << meal << endl;

	cout << "&Food : " << &food << endl;
	cout << "&Meal : " << &meal << endl;

	cout << "ptr : " << ptr << endl; 
	cout << "ptr_1 : " << ptr_1 << endl; //Output the memory address of food with the pointer
	cout << "*ptr : " << *ptr << endl; // it act as a dereference operator.
	cout << "*ptr_1 : " << *ptr_1 << endl; // it act as a dereference operator.
	
	*ptr = "Banana";

	cout << "ptr (New value assigned): " << ptr << endl;
	cout << "*ptr (New value assigned): " << *ptr << endl;
	cout << "food : " << food << endl;

	return 0;
}