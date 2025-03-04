// List 

#include<iostream>
#include<string>
#include<list>
using namespace std;

int main()
{
	list<int> age = { 23, 12, 36, 27, 18, 19 };

	for (int i : age)
	{
		cout << i << ", ";
	}
	cout << "\n\n";



	return 0;
}