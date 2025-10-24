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

