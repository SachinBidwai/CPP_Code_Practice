#include <iostream>
#include <iomanip>
using namespace std;

// Define the differential equation dy/dx = f(x, y)
double f(double x, double y) {
    return x + y;
}

int main() {
    double x0 = 0.0;     // Initial x
    double y0 = 1.0;     // Initial y
    double h = 0.1;      // Step size
    int steps = 2;       // Number of steps to reach x = 0.2

    cout << fixed << setprecision(4);
    cout << "Step\tx\t\ty\n";
    cout << "--------------------------\n";

    for (int i = 0; i <= steps; ++i) {
        cout << i << "\t" << x0 << "\t" << y0 << "\n";
        y0 = y0 + h * f(x0, y0);  // Euler's formula
        x0 = x0 + h;
    }

    return 0;
}
