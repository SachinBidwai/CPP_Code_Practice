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

    // Set "info.log" as the output file for the log messages
    ofstream log_1("info.log");
    clog.rdbuf(log_1.rdbuf());

    // Write to the log file
    clog << "The number " << myNum << " was given\n";

    // Take user Input character
    cout << "Take user Input character : ";
    char c = cin.get();
    cout <<"Input Character is : " <<  c;

    // Displays boolean values as "true" and "false" instead of "1" and "0".
    cout << "\n\nDisplays boolean values as \"true\" and \"false\" instead of \"1\" and \"0\" : " << endl;
    cout << "boolalpha :  ";
    cout << boolalpha << false<< endl;

    // Close the file
    log.close();

    return 0;
}