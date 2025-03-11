// STL - Iterator

#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    // Create Containers:
    vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };
    vector<int> height_in_cm = { 159, 150, 142, 170, 135, 149, 132,160 };
    list<string> names = { "Sachin", "Kaustubh", "Dipali", "Ruthvij" };
    list<int> numbers = { 28, 45, 23, 38, 87, 49, 56, 98 };
    deque<string> fruits = { "Mango", "Banana", "Apple", "Papaya" };
    set<int> ages = { 13, 12, 14, 17, 18, 13, 14, 17, 18, 13, 11, 19 };
    map<string, int> students = { {"sachin", 42},{"Dipali", 37}, {"Kaustubh", 13}, {"Ruthvij", 10} };

    // Display Vector Cars:
    cout << "\nNames from Vector Cars: ";
    cout << "{ ";
    bool first = true;  // Reset before loop
    // begin() returns an iterator that points to the first element of the data structure.
    // end() returns an iterator that points to one position after the last element.
    for (auto it = cars.begin(); it != cars.end(); ++it)
    {
        if (!first) cout << ", ";
        cout << *it;  // The dereference operator (*it) accesses the element the iterator points to.
        first = false;
    }
    cout << " }\n";


    // Iterate in Reverse
    // To iterate in reverse order, you can use rbegin() and rend() instead of begin() and end():
    cout << "\nNames from Vector Cars Iterate in Reverse order : ";
    cout << "{ ";
    first = true;  // Reset before loop

    for (auto it = cars.rbegin(); it != cars.rend(); ++it)
    {
        if (!first) cout << ", ";
        cout << *it;  // The dereference operator (*it) accesses the element the iterator points to.
        first = false;
    }
    cout << " }\n";


    // Skip BMW car Name from vector Cars.
    cout << "\nSkip \"BMW\" car Name from vector Cars:  ";
    cout << "{ ";
    first = true;  // Reset before loop
    for (auto it = cars.begin(); it != cars.end(); ) {
        if (*it == "BMW") {
            it = cars.erase(it); // Remove an element if it matches "BMW"
        }
        else
        {
            if (!first) cout << ", ";
            cout << *it;  // The dereference operator (*it) accesses the element the iterator points to.
            first = false;
            ++it;
        }
    }
    cout << " }" << endl;


    // Display List Names:
    cout << "\nNames from List Names: ";
    cout << "{ ";
    first = true;  // Reset before loop
    for (auto it_1 = names.begin(); it_1 != names.end(); ++it_1)
    {
        if (!first) cout << ", ";
        cout << *it_1;
        first = false;
    }
    cout << " }\n";

    // Display List Numbers:
    cout << "\nNumbers from List Numbers: ";
    cout << "{ ";
    first = true;  // Reset before loop
    for (auto it_2 = numbers.begin(); it_2 != numbers.end(); ++it_2)
    {
        if (!first) cout << ", ";
        cout << *it_2;
        first = false;
    }
    cout << " }\n";

    // Display deque fruits :
    cout << "\nNames from Deque fruits: ";
    cout << "{ ";
    first = true;  // Reset before loop

    for (auto it = fruits.begin(); it != fruits.end(); ++it)
    {
        if (!first) cout << ", ";
        cout << *it;  // The dereference operator (*it) accesses the element the iterator points to.
        first = false;
    }
    cout << " }\n";


    // Display Set ages:
    cout << "\nAges from set ages : ";
    cout << "{ ";
    first = true;  // Reset before loop

    for (auto it = ages.begin(); it != ages.end(); ++it)
    {
        if (!first) cout << ", ";
        cout << *it;  // The dereference operator (*it) accesses the element the iterator points to.
        first = false;
    }
    cout << " }\n";

    // Display Map students:
    cout << "\nStudent name and age information through Map : ";
    cout << "{ ";
    first = true; // Reset before loop

    for (auto it = students.begin(); it != students.end(); ++it)
    {
        if (!first) cout << ", ";
        cout << "{ " << it->first << " , " << it->second << " }";
        first = false;
    }
    cout << " }\n\n";

    // Algorithms:
    cout << "Algorithms : " << "\n\n";

    cout << "Sorting heights Algorithm in Ascending order:  ";

    // Sort heights in Ascending order
    sort(height_in_cm.begin(), height_in_cm.end());

    cout << "{ ";
    first = true; // Reset before loop

    for (auto height : height_in_cm)
    {
        if (!first) cout << ", ";
        cout << height;
        first = false;
    }
    cout << " }\n\n";


    cout << "Sorting heights Algorithm in Descending Order:  ";

    // Sort heights in Descending Order
    sort(height_in_cm.rbegin(), height_in_cm.rend());

    cout << "{ ";
    first = true; // Reset before loop

    for (auto height : height_in_cm)
    {
        if (!first) cout << ", ";
        cout << height;
        first = false;
    }
    cout << " }\n\n";

    return 0;
}
