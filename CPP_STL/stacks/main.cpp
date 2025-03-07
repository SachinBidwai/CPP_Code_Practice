// STL : Stack

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() 
{
    stack<string> cars;

    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Change the value of the top element
    cars.top() = "Tesla";

    // Size of cars stack.
    cout << "Size of cars stack : " << cars.size() <<endl;

    cout << "{ ";

    // Loop through the stack and display elements
    while (!cars.empty()) 
    {
        cout << cars.top();  // Access the top element
        cars.pop();          // Remove the top element

        if (!cars.empty()) 
        {
            cout << ", ";    // Add comma except for the last element
        }
    }

    cout << " }" << endl;

    return 0;
}