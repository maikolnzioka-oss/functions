/*Name:MICHAEL NZIOKA
  Reg:CT101/G/26528/25
  */

#include <stdio.h>

int main() {
    int choice;

    printf("=============================================\n");
    printf("       MOBILE DATA BUNDLE PURCHASE MENU\n");
    printf("=============================================\n");
    printf("Option\tBundle\t\tCost (KES)\n");
    printf("1\t100 MB\t\t50\n");
    printf("2\t500 MB\t\t200\n");
    printf("3\t1 GB\t\t350\n");
    printf("4\t2 GB\t\t600\n");
    printf("=============================================\n");

    // Prompt user for choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Use switch to determine bundle
    switch (choice) {
        case 1:
            printf("\nYou selected: 100 MB for KSh. 50\n");
            break;
        case 2:
            printf("\nYou selected: 500 MB for KSh. 200\n");
            break;
        case 3:
            printf("\nYou selected: 1 GB for KSh. 350\n");
            break;
        case 4:
            printf("\nYou selected: 2 GB for KSh. 600\n");
            break;
        default:
            printf("\nInvalid choice. Please select a number between 1 and 4.\n");
    }

    printf("=============================================\n");

    return 0;
}

