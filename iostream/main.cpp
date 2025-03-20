#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    int x = 5;
    int y = 0;

    // Set "error.log" as the output file for the error messages
    ofstream log("error.log");
    cerr.rdbuf(log.rdbuf());


    // Write an error message
    if (y == 0) 
    {
        cerr << "Division by zero: " << x << " / " << y << "\n";
    }
    else 
    {
        cout << (x / y);
    }

    // Close the file
    log.close();

    return 0;
}