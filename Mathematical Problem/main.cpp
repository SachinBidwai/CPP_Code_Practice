#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
    return isPrime;
}

int countUniqueSums(int N) {
    auto isPrime = sieve(1000);
    vector<int> primes;
    for (int i = 2; i < 1000; ++i)
        if (isPrime[i]) primes.push_back(i);

    set<int> results;
    for (int a : primes) {
        int p2 = a * a;
        if (p2 >= N) break;
        for (int b : primes) {
            int p3 = b * b * b;
            if (p2 + p3 >= N) break;
            for (int c : primes) {
                int p4 = c * c * c * c;
                int sum = p2 + p3 + p4;
                if (sum >= N) break;
                else
                {
                    cout << "\n\n";
                    cout << "Num = a^2 + b^3 + c^4 " << endl;
                    cout << sum <<" = " << a << "^2" <<" + "<< b << "^3"<< " + " << c << "^4"<< endl;
                    cout << sum << " = " << p2 << " + " << p3 << " + " << p4 << endl;
                }
                results.insert(sum);
            }
        }
    }
    return results.size();
}


int main()
{
    int a;
    cout << "Find how many unique numbers less than N can be written as the sum of a prime square, prime cube and prime fourth power." << endl;
    cout << "\nEnter a number N : " << endl;
    cin >> a;
    int count = countUniqueSums(a);
    cout << "\n\nUnique numbers less than N can be written as the sum of a prime square, prime cube and prime fourth power: " << count << endl;
    return 0;
}