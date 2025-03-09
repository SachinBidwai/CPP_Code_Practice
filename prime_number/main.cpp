// Check wheather given number is prime number, composite number, Perfect Square.

#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to check if a number is a perfect square
bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return (root * root == num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative numbers are not considered for prime or perfect square tests." << endl;
        return 0;
    }

    // Check and display results
    if (isPrime(num)) {
        cout << num << " is a Prime Number." << endl;
    }
    else if (num > 1) {
        cout << num << " is a Composite Number." << endl;
    }

    if (isPerfectSquare(num)) {
        cout << num << " is a Perfect Square." << endl;
    }

    return 0;
}
