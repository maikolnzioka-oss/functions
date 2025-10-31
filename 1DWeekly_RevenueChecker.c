#include <stdio.h>

int main() {
    float revenue[7];       // Array to store revenue for each day
    float total = 0.0, average;
    int i;

    printf("=============================================\n");
    printf("     HOTEL WEEKLY REVENUE TRACKING SYSTEM\n");
    printf("=============================================\n");

    // Input revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d (in KSh): ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  // Add to total as input is taken
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\n=============================================\n");
    printf("Total Weekly Revenue: KSh. %.2f\n", total);
    printf("Average Daily Revenue: KSh. %.2f\n", average);
    printf("=============================================\n");

    return 0;
}
