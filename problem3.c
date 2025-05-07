#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    // Display menu
    printf("1. Celcius to Farenheit\n");
    printf("2. Farenheit to Celcius\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Celsius to Fahrenheit
        printf("Enter the temperature in Celcius: ");
        scanf("%f", &temp);
        converted = (temp * 9 / 5) + 32;
        printf("%.2f Celcius is %.2f Farenheit\n", temp, converted);
    } else if (choice == 2) {
        // Fahrenheit to Celsius
        printf("Enter the temperature in Farenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5 / 9;
        printf("%.2f Farenheit is %.2f Celcius\n", temp, converted);
    } else {
        printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0;
}
