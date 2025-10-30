#include <stdio.h>

int main() {
    int units;
    float totalBill;

    printf("=====================================\n");
    printf("         WATER BILL CALCULATOR\n");
    printf("=====================================\n");

    // Prompt the user for input
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    // Calculate total bill based on units consumed
    if (units <= 30) {
        totalBill = units * 20;
    } 
    else if (units <= 60) {
        totalBill = units * 25;
    } 
    else {
        totalBill = units * 30;
    }

    // Display the total bill
    printf("\nTotal water bill = KSh. %.2f\n", totalBill);
    printf("=====================================\n");

    return 0;
}
