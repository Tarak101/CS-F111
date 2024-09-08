#include <stdio.h>

int main() {
    int N, M, i, j;
    float marks, total, average;

    printf("Enter number of students: ");
    scanf("%d", &N);
    printf("Enter number of subjects: ");
    scanf("%d", &M);

    for (i = 1; i <= N; i++) {
        total = 0;
        printf("For student %d, enter marks in %d subjects:\n", i, M);
        for (j = 1; j <= M; j++) {
            scanf("%f", &marks);
            total += marks;
        }
        average = total / M;
        printf("Percentage for student %d: %.1f\n", i, average);
    }

    return 0;
}
