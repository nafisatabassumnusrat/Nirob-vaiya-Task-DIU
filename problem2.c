#include <stdio.h>

int main() {
    float x, y;

    // Input the coordinates
    printf("Please enter the value of X coordinate point: ");
    scanf("%f", &x);
    printf("Please enter the value of Y coordinate point: ");
    scanf("%f", &y);

    // Determine the quadrant
    if (x > 0 && y > 0) {
        printf("Inputted coordinate (%.2f, %.2f) lies in 1st Quadrant\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("Inputted coordinate (%.2f, %.2f) lies in 2nd Quadrant\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("Inputted coordinate (%.2f, %.2f) lies in 3rd Quadrant\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("Inputted coordinate (%.2f, %.2f) lies in 4th Quadrant\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("Inputted coordinate (%.2f, %.2f) is at the Origin\n", x, y);
    } else if (x == 0) {
        printf("Inputted coordinate (%.2f, %.2f) lies on the Y-axis\n", x, y);
    } else if (y == 0) {
        printf("Inputted coordinate (%.2f, %.2f) lies on the X-axis\n", x, y);
    }

    return 0;
}
