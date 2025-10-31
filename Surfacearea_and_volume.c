/*Name:MICHAEL NZIOKA
  Reg:CT101/G/26528/25

  */


#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, height, volume, surfaceArea;

    printf("=====================================\n");
    printf("   CYLINDER VOLUME & SURFACE AREA\n");
    printf("=====================================\n");

    // Prompt user for radius and height
    printf("Enter the radius of the cylinder (in cm): ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder (in cm): ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * (height + radius);

    // Display results
    printf("\n=====================================\n");
    printf("Cylinder Radius: %.2f cm\n", radius);
    printf("Cylinder Height: %.2f cm\n", height);
    printf("Volume: %.2f cubic cm\n", volume);
    printf("Surface Area: %.2f square cm\n", surfaceArea);
    printf("=====================================\n");

    return 0;
}

