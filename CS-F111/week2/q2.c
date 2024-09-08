#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    
    printf("Value before swapping: a=%d, b=%d\n", a, b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("Value after swapping: a=%d, b=%d\n", a, b);
    return 0;
}
