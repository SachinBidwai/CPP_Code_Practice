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
    list<string> names = { "Sachin", "Kaustubh", "Dipali", "Ruthvij" };
    list<int> numbers = { 28, 45, 23, 38, 87, 49, 56, 98 };

    // Display Vector Cars:
    cout << "\nNames from Vector Cars: ";
    cout << "{ ";
    bool first = true;  // Reset before loop
    for (auto it = cars.begin(); it != cars.end(); ++it)
    {
        if (!first) cout << ", ";
        cout << *it;
        first = false;
    }
    cout << " }\n";

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

    return 0;
}
