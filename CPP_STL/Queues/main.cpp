// STL : Queues

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    queue<string> cars;
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Display the queue elements
    cout << "{ ";
    queue<string> tempCars = cars;  // Use a copy to avoid modifying the original queue
    while (!tempCars.empty()) 
    {
        cout << tempCars.front();
        tempCars.pop();
        if (!tempCars.empty()) 
        {
            cout << ", ";
        }
    }
    cout << " }" << endl;

    // Access front and back elements
    if (!cars.empty()) 
    {
        cout << "Access Queue Elements: " << endl;
        cout << " Front element of queue Cars is: " << cars.front() << endl;
        cout << " Back element of queue Cars is: " << cars.back() << endl;
    }

    // Change front and back elements (Rebuilding Queue)
    queue<string> modifiedCars;
    if (!cars.empty()) 
    {
        modifiedCars.push("Honda");  // New front element
        cars.pop(); // Remove old front
    }

    while (cars.size() > 1) 
    { // Keep middle elements unchanged
        modifiedCars.push(cars.front());
        cars.pop();
    }

    if (!cars.empty()) 
    {
        modifiedCars.push("i20");  // New back element
        cars.pop();
    }

    // Display modified queue
    cout << "Modified Queue Elements: " << endl;
    cout << " Front element: " << modifiedCars.front() << endl;
    cout << " Back element: " << modifiedCars.back() << endl;
    cout << "Queue Size: " << modifiedCars.size() << endl;

    // Print modified queue
    cout << "{ ";
    while (!modifiedCars.empty()) 
    {
        cout << modifiedCars.front();
        modifiedCars.pop();
        if (!modifiedCars.empty()) 
        {
            cout << ", ";
        }
    }
    cout << " }" << endl;

    return 0;
}

