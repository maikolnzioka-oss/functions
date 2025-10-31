/*Name:MICHAEL NZIOKA
  Reg:CT101/G/26528/25

  */
#include <stdio.h>

int main() {
    float attendance, averageMarks;

    printf("=====================================\n");
    printf("        EXAM ELIGIBILITY CHECKER\n");
    printf("=====================================\n");

    // Input student details
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    // Check eligibility
    if (attendance >= 75 && averageMarks >= 40) {
        printf("\nResult: Eligible for final exams.\n");
    } else {
        printf("\nResult: Not eligible.\n");
    }

    printf("=====================================\n");

    return 0;
}

