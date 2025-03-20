#include <iostream>
using namespace std;

int main() 
{
    int x = 5;
    int y = 0;

    if (y == 0) 
    {
        cerr << "Division by zero: " << x << " / " << y << "\n";
    }
    else 
    {
        cout << (x / y);
    }
    return 0;
}