#include <stdio.h>

int main() {
    int age;
    float income;

    printf("=====================================\n");
    printf("       BANK LOAN ELIGIBILITY CHECK\n");
    printf("=====================================\n");

    // Input details
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in KSh): ");
    scanf("%f", &income);

    // Check loan eligibility
    if (age >= 21 && income >= 21000) {
        printf("\nCongratulations! You qualify for a loan.\n");
    } else {
        printf("\nSorry, you do not meet the loan requirements.\n");
    }

    printf("=====================================\n");

    return 0;
}

