#include <stdio.h>

int main() {
    float height;
    double bankBalance;
    char phoneNumber[20]; // String to hold phone number

  
    printf("     USER DETAILS ENTRY PROGRAM\n");
    

    // Prompt user for height
    printf("Enter your height : ");
    scanf("%f", &height);

    // Prompt user for bank balance
    printf("Enter your bank balance (KES): ");
    scanf("%lf", &bankBalance);

    // Prompt user for phone number
    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);

    // Display entered details
    printf("\n=============================================\n");
    printf("          ENTERED DETAILS \n");
    printf("=============================================\n");
    printf("Height: %.2f\n", height);
    printf("Bank Balance: KSh. %.2lf\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);
    printf("=============================================\n");

    return 0;
}
