#include <stdio.h>

int main() {
    int M, N, i, j, matrix[10][10], main_diag_sum = 0, opp_diag_sum = 0;

    printf("Enter number of rows (M): ");
    scanf("%d", &M);
    printf("Enter number of columns (N): ");
    scanf("%d", &N);

    if (M != N) {
        printf("Invalid, not a square matrix.\n");
    } else {
        printf("Enter the matrix elements:\n");
        for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        // Sum of main diagonal
        for (i = 0; i < M; i++) {
            main_diag_sum += matrix[i][i];
        }

        // Sum of opposite diagonal
        for (i = 0; i < M; i++) {
            opp_diag_sum += matrix[i][M - i - 1];
        }

        printf("Sum of main diagonal: %d\n", main_diag_sum);
        printf("Sum of opposite diagonal: %d\n", opp_diag_sum);
    }

    return 0;
}
