/*Name:MICHAEL NZIOKA
  Reg:CT101/G/26528/25
  Description:Conversion of temperature to celsius
  */

#include <stdio.h>

// Function prototype
float convertToCelsius(float fahrenheit);

// Main function to test the conversion
void main() {
    float fahrenheit, celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = convertToCelsius(fahrenheit);
    
    printf("The temperature is :%.2f°C\n", celsius);
}

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

