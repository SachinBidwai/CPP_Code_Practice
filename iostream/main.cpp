#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    int x = 5;
    int y = 0;
    int myNum = 12;

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

    // Use the clog object to output log messages
    clog << "The number " << myNum << " was given\n";

    // Close the file
    log.close();

    return 0;
}