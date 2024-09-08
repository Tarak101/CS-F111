#include <stdio.h>

int main() {
    int arr[10], i, sum = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
