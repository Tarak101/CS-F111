#include <stdio.h>

int main() {
    int num, sum = 0, temp, reversed_sum = 0, product;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    temp = sum;
    while (temp > 0) {
        reversed_sum = reversed_sum * 10 + temp % 10;
        temp /= 10;
    }

    product = sum * reversed_sum;

    if (product == num) {
        printf("%d is a magic number.\n", num);
    } else {
        printf("%d is not a magic number.\n", num);
    }

    return 0;
}
