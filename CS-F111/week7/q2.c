#include <stdio.h>

int main() {
    int M, N, i, j, matrix[10][10], row_sum, col_sum;

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

    // Sum of each row
    for (i = 0; i < M; i++) {
        row_sum = 0;
        for (j = 0; j < N; j++) {
            row_sum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, row_sum);
    }

    // Sum of each column
    for (j = 0; j < N; j++) {
        col_sum = 0;
        for (i = 0; i < M; i++) {
            col_sum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, col_sum);
    }

    return 0;
}
