//Write a C program to merge two different arrays into one. 
#include <stdio.h>

int main() {
    int n1, n2, i, j;

    // Input size of first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("\nEnter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Merged array
    int merged[n1 + n2];

    // Copy first array to merged
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array to merged
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Output merged array
    printf("\nMerged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
