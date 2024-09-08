#include <stdio.h>

int main() {
    int N, i, j, is_prime;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 2; i <= N; i++) {
        is_prime = 1; // Assume i is prime
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; // i is not prime
                break;
            }
        }
        if (is_prime) {
            printf("Prime number %d\n", i);
        }
    }

    return 0;
}
