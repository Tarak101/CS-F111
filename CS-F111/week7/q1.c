#include <stdio.h>

int main() {
    int N, i, j;
    float basic_salary, HRA, special_allowance, total_salary[100], temp;

    printf("Enter number of employees: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Enter basic salary for employee %d: ", i + 1);
        scanf("%f", &basic_salary);

        HRA = 0.40 * basic_salary;
        special_allowance = 0.25 * basic_salary;
        total_salary[i] = basic_salary + HRA + special_allowance;

        printf("HRA allowance (calculated) = %.2f\n", HRA);
        printf("Special allowance (calculated) = %.2f\n", special_allowance);
        printf("Total salary (calculated) = %.2f\n", total_salary[i]);
    }

    // Sort total_salary array in descending order
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (total_salary[i] < total_salary[j]) {
                temp = total_salary[i];
                total_salary[i] = total_salary[j];
                total_salary[j] = temp;
            }
        }
    }

    printf("Salaries in descending order: ");
    for (i = 0; i < N; i++) {
        printf("%.2f ", total_salary[i]);
    }
    printf("\n");

    return 0;
}
