/*Name:MICHAEL NZIOKA
  Reg:CT101/G/26528/25
  Description:Calculatiom of fare covered per kilometre
  */
#include <stdio.h>

// Function prototype
float calculateFare(float distance);

void main() {
	//Function call
    float distance;
    float results;

    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    results = calculateFare(distance);
    printf("Total fare = KSh. %.2f\n", results);
}

// Function definition
float calculateFare(float distance) {
    float fareRate = 50;
    float totalFare;

    totalFare = distance * fareRate;
    return totalFare;
}


