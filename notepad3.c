//Write a c program to find the sum of all elements in an array
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n]; // Declare array

    // Input elements
    printf("Enter %d whole numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // Add to sum directly
    }

    // Print the sum
    printf("\nThe sum of all elements is: %d\n", sum);

    return 0;
}
