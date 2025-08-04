#include <iostream>
#include <thread>
using namespace std;

void printSquare(int n) {
    cout << "Square of " << n << " is " << n * n << endl;
}

int main() {
    thread t1(printSquare, 4);
    thread t2(printSquare, 5);
    t1.join();
    t2.join();
    return 0;
}
