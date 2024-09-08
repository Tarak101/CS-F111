#include <stdio.h>

int main() {
    int M, N, i, j, matrix[10][10], key, found = 0;

    printf("Enter number of rows (M): ");
    scanf("%d", &M);
    printf("Enter number of columns (N): ");
    scanf("%d", &N);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (matrix[i][j] == key) {
                printf("Element is present at [%d][%d]\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }

    return 0;
}
