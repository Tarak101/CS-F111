#include <stdio.h>

int main() {
    float x, y;
    printf("Enter the x coordinate: ");
    scanf("%f", &x);
    printf("Enter the y coordinate: ");
    scanf("%f", &y);

    if (x > 0 && y > 0) {
        printf("The point is in the First Quadrant.\n");
    } else if (x < 0 && y > 0) {
        printf("The point is in the Second Quadrant.\n");
    } else if (x < 0 && y < 0) {
        printf("The point is in the Third Quadrant.\n");
    } else if (x > 0 && y < 0) {
        printf("The point is in the Fourth Quadrant.\n");
    } else if (x == 0 && y != 0) {
        printf("The point is on the Y-axis.\n");
    } else if (x != 0 && y == 0) {
        printf("The point is on the X-axis.\n");
    } else {
        printf("The point is at the origin.\n");
    }
    return 0;
}
