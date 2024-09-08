#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character representing a color (v, o, y, g, b, i, r): ");
    scanf(" %c", &ch); // Note the space before %c to handle any leftover whitespace

    switch (ch) {
        case 'v':
        case 'V':
            printf("\nViolet");
            break;
        case 'o':
        case 'O':
            printf("\nOrange");
            break;
        case 'y':
        case 'Y':
            printf("\nYellow");
            break;
        case 'g':
        case 'G':
            printf("\nGreen");
            break;
        case 'b':
        case 'B':
            printf("\nBlue");
            break;
        case 'i':
        case 'I':
            printf("\nIndigo");
            break;
        case 'r':
        case 'R':
            printf("\nRed");
            break;
        default:
            printf("\nColor is not in rainbow");
            break;
    }

    return 0;
}
