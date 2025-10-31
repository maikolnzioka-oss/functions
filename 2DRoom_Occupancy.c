/*Name:MICHAEL NZIOKA
  Reg:CT101/G/26528/25
  Description:Hotel Room Occupancy
  */

#include <stdio.h>

int main() {
    int occupancy[5][10];    // 5 floors, 10 rooms per floor
    int floor, room;
    int occupied, vacant;

    printf("=============================================\n");
    printf("     HOTEL ROOM OCCUPANCY TRACKING SYSTEM\n");
    printf("=============================================\n");

    // Step 1: Input (simulate or manually enter) occupancy data
    printf("Enter room occupancy data (1 = occupied, 0 = vacant):\n");

    for (floor = 0; floor < 5; floor++) {
        printf("\n--- Floor %d ---\n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Step 2: Display number of occupied and vacant rooms per floor
    printf("\n=============================================\n");
    printf("Floor\tOccupied\tVacant\n");
    printf("=============================================\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        // Count occupancy for each floor
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        // Display results for the floor
        printf("%d\t%d\t\t%d\n", floor + 1, occupied, vacant);
    }

    printf("=============================================\n");
    printf("End of Occupancy Report\n");
    printf("=============================================\n");

    return 0;
}

