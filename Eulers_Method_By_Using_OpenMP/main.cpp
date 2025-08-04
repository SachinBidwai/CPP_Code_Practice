#include <iostream>
#include <omp.h>

int main() {
#pragma omp parallel for
    for (int i = 0; i < 8; i++) {
        std::cout << "Thread " << omp_get_thread_num() << " handling i = " << i << std::endl;
    }
    return 0;
}