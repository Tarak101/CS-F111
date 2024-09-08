#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Factors of %d = ", i);
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}
