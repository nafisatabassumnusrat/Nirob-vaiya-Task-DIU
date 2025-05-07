#include <stdio.h>

int main() {
    int father_age, mother_age, uncle_age;

    // Taking input
    printf("Enter your father age: ");
    scanf("%d", &father_age);
    
    printf("Enter your mother age: ");
    scanf("%d", &mother_age);
    
    printf("Enter your uncle age: ");
    scanf("%d", &uncle_age);

    // Finding oldest, youngest and the one in between
    if (father_age >= mother_age && father_age >= uncle_age) {
        printf("Your father is the oldest person.\n");
        if (mother_age <= uncle_age) {
            printf("Your mother is the youngest person.\n");
            printf("Your uncle's age is between oldest and youngest age.\n");
        } else {
            printf("Your uncle is the youngest person.\n");
            printf("Your mother's age is between oldest and youngest age.\n");
        }
    } else if (mother_age >= father_age && mother_age >= uncle_age) {
        printf("Your mother is the oldest person.\n");
        if (father_age <= uncle_age) {
            printf("Your father is the youngest person.\n");
            printf("Your uncle's age is between oldest and youngest age.\n");
        } else {
            printf("Your uncle is the youngest person.\n");
            printf("Your father's age is between oldest and youngest age.\n");
        }
    } else {
        printf("Your uncle is the oldest person.\n");
        if (father_age <= mother_age) {
            printf("Your father is the youngest person.\n");
            printf("Your mother's age is between oldest and youngest age.\n");
        } else {
            printf("Your mother is the youngest person.\n");
            printf("Your father's age is between oldest and youngest age.\n");
        }
    }

    return 0;
}
