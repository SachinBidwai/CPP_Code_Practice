#include <iostream>
#include <cmath>
#include <iomanip>
#include <omp.h>
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

void eulerSolver(int choice, double x0, double y0, double h, int steps, int thread_id) {
    cout << "\n=== Thread " << thread_id << " solving Equation " << choice << " ===\n";
    cout << "Step\tx\t\ty\n";
    cout << "--------------------------\n";

    for (int i = 0; i <= steps; ++i) {
        cout << i << "\t" << fixed << setprecision(6) << x0 << "\t" << y0 << "\n";
        y0 = y0 + h * f(choice, x0, y0);
        x0 = x0 + h;
    }
}

int main() {
    double x0 = 0.0, y0 = 1.0, h = 0.1;
    int steps = 10;

    omp_set_num_threads(4);  // Set to use 4 cores

    cout << "Running all 10 Euler problems in parallel using OpenMP...\n";

    // Use OpenMP to parallelize the loop
#pragma omp parallel for
    for (int i = 1; i <= 10; ++i) {
        int thread_id = omp_get_thread_num();  // Core number (0–3 if 4 cores)
        eulerSolver(i, x0, y0, h, steps, thread_id);
    }

    // Print total threads used
#pragma omp parallel
    {
#pragma omp single
        {
            int used_threads = omp_get_num_threads();
            cout << "\n✅ Total threads (cores) used: " << used_threads << "\n";
        }
    }

    return 0;
}
