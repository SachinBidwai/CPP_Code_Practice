#include <iostream>
#include <fstream>
#include <iomanip>
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

    // Booleans
    cout << "Booleans\n";
    cout << false << "\n";
    cout << boolalpha << false << "\n";

    // Hexadecimal and octal numbers
    cout << "\nHexadecimal and octal numbers\n";
    int myInt = 14;
    cout << dec << myInt << "\n";
    cout << hex << myInt << "\n";
    cout << oct << myInt << "\n";
    cout << showbase << uppercase;
    cout << hex << myInt << "\n";
    cout << oct << myInt << "\n";
    cout << dec;

    // Floating point numbers
    cout << "\nFloating point numbers\n";
    float myFloat = 19.99;
    cout << myFloat << "\n";
    cout << showpos << showpoint << 12345.0 << "\n";
    cout << noshowpos << noshowpoint;
    cout << fixed << myFloat << "\n";
    cout << scientific << myFloat << "\n";

    // Alignment
    cout << "\nAlignment\n";
    cout << setw(10) << left << "Left" << "\n";
    cout << setw(10) << right << "Right" << "\n";
    cout << setw(10) << internal << -12345 << " (Internal)\n";

    // The minimum number of characters wide
    cout << "The minimum number of characters wide : " << endl;
    cout.width(10);
    cout << 5 << "\n";
    cout.width(10);
    cout << 25 << "\n";
    cout.width(10);
    cout << 125 << "\n";

    // Close the file
    log.close();

    return 0;
}