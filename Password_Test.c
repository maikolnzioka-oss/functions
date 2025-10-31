/*Name:MICHAEL NZIOKA
  Reg:CT101/G/26528/25

  */


#include <stdio.h>
#include <string.h>

int main() {
    char password[10];

    printf("=====================================\n");
    printf("         PASSWORD LOGIN SYSTEM\n");
    printf("=====================================\n");

    // Repeat until the correct password is entered
    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password. Try again.\n\n");
        }

    } while (strcmp(password, "1234") != 0);

    printf("\nAccess Granted.\n");
    printf("=====================================\n");

    return 0;
}

