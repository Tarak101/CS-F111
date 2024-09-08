#include <stdio.h>

int main() {
    int marks1[10], marks2[10];
    int i, identical = 1;

    printf("Enter 10 marks for list 1:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks1[i]);
    }

    printf("Enter 10 marks for list 2:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks2[i]);
    }

    for (i = 0; i < 10; i++) {
        if (marks1[i] != marks2[i]) {
            identical = 0;
            break;
        }
    }

    if (identical) {
        printf("Identical\n");
    } else {
        printf("Not Identical\n");
    }

    return 0;
}
