// Lambda Functions

// A lambda function is a small, anonymous function you can write directly in your code. It's useful when you need a quick function without naming it or declaring it separately.

#include <iostream>
#include <string>
using namespace std;

auto message = [](string name, int age)
    {
        cout << name << " age is " << age << endl;
    };


int main()
{
    message("Sachin", 42);
    return 0;
}
