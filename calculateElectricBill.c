/*Name:MICHAEL NZIOKA
  Reg:CT101/G/26528/25
  Description:Calculatiom of electric bill
  */

#include <stdio.h>
//Function prototype
float ElectricBill(int units); 

// function call
void main() {
    int units;
    float totalBill;

    // Prompt the user to enter number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    
    totalBill = ElectricBill(units);

    printf("Total electricity bill = KSh. %.2f\n", totalBill);
}

// Function definition
float ElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    } 
    else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}
