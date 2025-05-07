#include <stdio.h>

int main() {
    int n, i;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n]; // Declare array of size n

    // Input n numbers
    printf("Enter %d whole numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Print numbers in reverse order
    printf("\nNumbers in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
