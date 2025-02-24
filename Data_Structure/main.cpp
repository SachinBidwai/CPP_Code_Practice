#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
	vector<string> cars = { "volvo", "BMW", "Benz", "Tata" };

	sort(cars.begin(), cars.end());

	cout << "Sorting with alphabetes : " << endl;

	for (auto car : cars)
	{
		cout << car << endl;
	}

	//vector<string>::iterator it;
	cout << "Iterator output : " << endl;
	for (auto it = cars.begin(); it != cars.end(); it++)
	{
		cout << *it << endl;
	}

	cout << "Reverse vector : " << endl;
	for (auto it = cars.rbegin(); it != cars.rend(); it++)
	{
		cout << *it << endl;
	}

	cout << " { ";
	for (string car : cars)
	{
		cout << " \" " << car << " \" " << " , ";
	}
	cout << " } \n\n";

	cout << "First element of Vector : " << cars.front() << endl;
	cout << "Last element of Vector : " << cars.back() << endl;
	cout << "Third element of Vector : " << cars.at(2) << endl;

	cars[1] = "Suzuki";

	cout << cars[1] << endl;

	cars.push_back("Tesla");
	cars.push_back("Alto");
	cars.push_back("Honda");

	for (auto car : cars)
	{
		cout << car << ",";
	}
	cout << "\n\n";

	cars.pop_back();
	cars.pop_back();
	for(int i = 0; i < cars.size(); i++)
	{
		cout << cars[i] << ", ";
	}
	cout << "\n\n";

	cout << "Size of Vector : " << cars.size() << endl;
	cout << " Is given vector is empty or Not : "<< cars.empty() << endl;

	list<string> Animals = { "cat", "dog", "donkey", "Horse" };

	for (string Ani : Animals)
	{
		cout << Ani << endl;
	}

	cout << Animals.front()<< endl;
	cout << Animals.back() << endl;

	Animals.front() = "Rabit";
	Animals.back() = "Tortoies";

	cout << "List size : " << Animals.size() << endl;

	for (string Ani : Animals)
	{
		cout << Ani << " , ";
	}
	cout << "\n\n";

	Animals.push_front("Rat");
	Animals.push_back("Tiger");

	cout << "List size : " << Animals.size() << endl;

	for (string Ani : Animals)
	{
		cout << Ani << " , ";
	}
	cout << "\n\n";

	Animals.pop_front();
	Animals.pop_back();

	cout << "List size : " << Animals.size() << endl;

	for (string Ani : Animals)
	{
		cout << Ani << " , ";
	}
	cout << "\n\n";

	cout << "Is List is Empty : " << Animals.empty() << endl;


	deque< string> Numbers = { "Zero", "One", "Two", "Three" };
	cout << "Deque as follows : " << endl;
	for (auto num : Numbers)
	{
		cout << num << " , ";
	}
	cout << "\n\n";

	set <int, greater<int>> numbers = { 4,8,34,56,7,26,12 };

	for (int num : numbers)
	{
		cout << num << "    ";
	}
	cout << "\n\n";

	set <int> numbers_1 = { 4,8,34,56,7,26,12, 8,26, 7};

	for (int num_1 : numbers_1)
	{
		cout << num_1 << "    ";
	}
	cout<< "List size : " << numbers_1.size() << "\n\n";

	map<string, int> people = { {"sachin", 42}, {"Kaustubh", 13}, {"Dipali", 36}, {"Ruthvij", 9} };

	cout << "Sachin Age is : " << people["sachin"]<<endl;
	cout << "Dipali Age is : " << people["Dipali"]<< endl;
	cout << "Ruthvij Age is : " << people.at("Ruthvij") << endl;

	cout << "Size of Map : " << people.size() << endl;

	people["Swhetank"] = 8;
	people["Rahul"] = 38;

	cout << "Size of Map : " << people.size() << endl;

	people.insert({ "Rohini", 45 });
	people.erase("Rahul");
	cout << people["Rahul"]<<endl;


	map<string, int, greater<string>> people_1 = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

	for (auto pair : people_1) {
		cout << pair.first << " is: " << pair.second << "\n";
	}


	cout << "Map By using Iterators : " << endl;
	for (auto it = people_1.begin(); it != people_1.end(); it++)
	{
		cout << it->first << " is " << it->second << endl;
	}

	vector <int> numbers_2 = { 7,3,9,4,2 ,5,1 };

	sort(numbers_2.begin(), numbers_2.end());

	for (auto num : numbers_2)
	{
		cout << num << " , ";
	}
	cout << "\n\n";

	cout << "reverse way sort : " << endl;

	vector<int> numbers_3 = { 4,12,45,34,28,35,87,48 };
	
	sort(numbers_3.rbegin(), numbers_3.rend());

	for (auto num : numbers_3)
	{
		cout << num << " , ";
	}
	cout << endl;

	auto it = find(numbers_3.begin(), numbers_3.end(), 28);

	if (it != numbers_3.end())
	{
		cout << "The number  28 found." << endl;
	}
	else
	{
		cout << "The number 28 not found." << endl;
	}

	auto it_1 = min_element(numbers_3.begin(), numbers_3.end());

	cout << *it_1 << endl;

	return 0;
}