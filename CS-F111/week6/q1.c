#include <stdio.h>

int main() {
    int marks[5], i;
    float total = 0, percentage;
    char grade;

    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 500) * 100;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("Total: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
