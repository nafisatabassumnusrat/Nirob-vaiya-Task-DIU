#include <stdio.h>

int main() {
    int numbers[10];  // Array to store 10 integers
    int i;

    // Input 10 numbers
    printf("Enter 10 whole numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Output the stored numbers
    printf("\nYou entered the following numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
