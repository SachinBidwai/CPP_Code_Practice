#include <iostream>
using namespace std;

struct Car {
    string brand;
    int year;
};


class Vehical
{
public:
    string name;
    int year;
};

void Display(Vehical v, Car c, int &count) 
{
    cout << "Name : " << v.name << ", Year : " << v.year << endl;
    cout<< "Brand: " << c.brand << ", Year: " << c.year << "\n";
    count += 1;
}

void myFunction(Car c) {
    cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}

int main() {
    Car myCar = { "Toyota", 2020 };
    myFunction(myCar);
    Vehical v1 = { "Maruti 800" , 1994 };
    int count = 0;
    Display(v1, myCar, count);
    Display(v1, myCar, count);
    Display(v1, myCar, count);
    cout <<"\n Count : " << count<< endl;

    return 0;
}
