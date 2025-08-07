#include <iostream>

int main() {
    long long limit = 10000000;
    long long sum = 0;
    long long a = 1, b = 2;

    while (b <= limit) {
        if (b % 2 == 0)
            sum += b;

        long long next = a + b;
        a = b;
        b = next;
    }

    std::cout << "Sum of even Fibonacci terms <= 10^7: " << sum << std::endl;
    return 0;
}
