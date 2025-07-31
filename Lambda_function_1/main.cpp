#include <iostream>
using namespace std;

int main() {
    int arr1[13] = { 1, 2, 3, 6, 7, 8, 9, 3, 4, 5, 6, 7, 8 };
    int arr2[13] = { 4, 5, 6, 7, 2, 3, 4, 5, 6, 8, 9, 2, 4 };

    for (int i = 0; i < 13; i++) {
        auto show = [&](int a[], int b[], int i) 
            {
                 cout << "Index: " << i << "     Sum : " << a[i] + b[i] << "\n";
            };

        show(arr1, arr2, i);
    }

    return 0;
}