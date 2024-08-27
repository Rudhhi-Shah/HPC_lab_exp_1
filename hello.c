#include <stdio.h>
#include <omp.h>

int main() {
    int num_threads;

    printf("Enter the number of threads: ");
    scanf("%d", &num_threads);

    // Set the number of threads
    omp_set_num_threads(num_threads);

    // Sequential printing
    printf("Sequential printing:\n");
    for (int i = 0; i < num_threads; i++) {
        printf("Hello, World\n");
    }

    // Parallel printing
    printf("Parallel printing:\n");
    #pragma omp parallel
    {
        printf("Hello, World from thread %d\n", omp_get_thread_num());
    }

    return 0;
}
