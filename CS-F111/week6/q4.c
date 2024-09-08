#include <stdio.h>

int main() {
    int arr[10], i, j, is_prime;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array:\n");
    for (i = 0; i < 10; i++) {
        if (arr[i] > 1) {
            is_prime = 1;
            for (j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime) {
                printf("%d\n", arr[i]);
            }
        }
    }

    return 0;
}
