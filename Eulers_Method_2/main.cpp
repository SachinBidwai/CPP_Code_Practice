#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function to choose f(x, y)
double f(int choice, double x, double y) {
    switch (choice) {
    case 1: return x + y;
    case 2: return y - x * x + 1;
    case 3: return x * sin(y);
    case 4: return x * y + x;
    case 5: return (y > 0) ? y * log(y) : 0;  // Avoid log(0)
    case 6: return exp(x) - y;
    case 7: return cos(x) - y;
    case 8: return (y != 0) ? x / y : 0;      // Avoid division by 0
    case 9: return sqrt(1 + y * y);
    case 10: return x * x + y * y;
    default: return 0;
    }
}

int main() {
    int choice;
    double x0, y0, h;
    int steps;

    cout << "Euler's Method Solver\n";
    cout << "----------------------\n";
    cout << "Choose the differential equation dy/dx = f(x, y):\n";
    cout << "1. x + y\n";
    cout << "2. y - x^2 + 1\n";
    cout << "3. x * sin(y)\n";
    cout << "4. x*y + x\n";
    cout << "5. y * log(y)\n";
    cout << "6. e^x - y\n";
    cout << "7. cos(x) - y\n";
    cout << "8. x / y\n";
    cout << "9. sqrt(1 + y^2)\n";
    cout << "10. x^2 + y^2\n";
    cout << "Enter your choice (1-10): ";
    cin >> choice;

    cout << "\nEnter initial condition x0: ";
    cin >> x0;
    cout << "Enter initial value y0: ";
    cin >> y0;
    cout << "Enter step size h: ";
    cin >> h;
    cout << "Enter number of steps: ";
    cin >> steps;

    cout << fixed << setprecision(6);
    cout << "\nStep\t x\t\t y\n";
    cout << "-------------------------------\n";
    for (int i = 0; i <= steps; i++) {
        cout << i << "\t" << x0 << "\t" << y0 << "\n";
        y0 = y0 + h * f(choice, x0, y0);
        x0 = x0 + h;
    }

    return 0;
}
