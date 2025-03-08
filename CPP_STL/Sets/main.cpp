// STL : Sets

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<string> cars = { "Honda", "Suzuki", "BMW", "Maruti", "Honda", "Honda", "BMW" };
    set<int> numbers = { 1, 8, 5, 3, 7, 2, 3, 7, 8, 1, 2, 3, 9, 5, 2, 3, 2, 3 };

    // Print cars set without a trailing comma
    cout << "{ ";
    bool first = true;
    // for (string word : words) - Every iteration creates a new copy of the string.
    // Pass by Reference : const string& car
    // const - Prevents modification of car inside the loop. The element is read-only.
    // string& - A reference to avoid making unnecessary copies of each string.
    
    // Best Practice : 
    // Use const T& for complex data types(string, vector, map).
    // Use T for small types(int, char, bool) unless modifying them.
    
    for (const string& car : cars) 
    {
        if (!first)
        {
            cout << ", ";
        }
        cout << car;
        first = false;
    }
    cout << " }" << endl;

    cout << "Cars set size: " << cars.size() << endl;

    // Print numbers set without a trailing comma
    cout << "{ ";
    first = true;
    for (int num : numbers) 
    {
        if (!first) 
        { 
            cout << ", "; 
        }
        cout << num;
        first = false;
    }
    cout << " }" << endl;

    cout << "Numbers set size: " << numbers.size() << endl;

    // Sort elements in a set in descending order
    set<int, greater<int>> number_1 = { 4,78,34,23,67,25,11,28,19,29,7 };

    cout << "{ ";
    bool first_1 = true;

    for (int num_1 : number_1)
    {
        if (!first_1)
        {
            cout << ", ";
        }
        cout << num_1;
        first_1 = false;
    }
    cout << " }" << endl;

    cout << "Number_1 set size is : " << number_1.size() << endl;

    // Add Elements in set :

    number_1.insert(123);
    number_1.insert(99);
    number_1.insert(256);
    number_1.insert(19);
    number_1.insert(21);

    cout << "After adding element in number_1 Set is : " << endl;

    cout << "{ ";
    bool first_2 = true;

    for (int num_1 : number_1)
    {
        if (!first_2)
        {
            cout << ", ";
        }
        cout << num_1;
        first_2 = false;
    }
    cout << " }" << endl;

    cout << "Number_1 set size is : " << number_1.size() << endl;

    cout << "After removing element in number_1 Set is : " << endl;
    
    // Remove elements from set.
    number_1.erase(21);
    number_1.erase(19);

    cout << "{ ";
    first_2 = true;

    for (int num_1 : number_1)
    {
        if (!first_2)
        {
            cout << ", ";
        }
        cout << num_1;
        first_2 = false;
    }
    cout << " }" << endl;

    cout << "Number_1 set size is : " << number_1.size() << endl;

    // To remove all elements from a set, you can use the .clear() function:
    cout << "Remove all elements from a set : " << endl;

    numbers.clear();

    cout << "{ ";
    first = true;
    for (int num : numbers)
    {
        if (!first)
        {
            cout << ", ";
        }
        cout << num;
        first = false;
    }
    cout << " }" << endl;

    cout << "Numbers set size: " << numbers.size() << endl;

    // Check if a numbers Set is Empty: 
    cout << "Check if a numbers Set is Empty : " << endl;

    bool n = numbers.empty();

    switch (n)
    {
        case 0 :
            cout << "Numbers Set contain elements. Numbers Set is not empty." << endl;
            break;

        case 1: 
            cout << "Numbers Set is empty." << endl;
            break;
    }


    return 0;
}