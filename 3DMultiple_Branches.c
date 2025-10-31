/*Name:MICHAEL NZIOKA
  Reg:CT101/G/26528/25
  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms per floor
    int branch, floor, room;
    int occupied, vacant;

    srand(time(0));  // Initialize random number generator

    printf("=====================================================\n");
    printf("     MULTI-BRANCH HOTEL OCCUPANCY TRACKING SYSTEM\n");
    printf("=====================================================\n");

    // Step 1: Generate random occupancy data (1 = occupied, 0 = vacant)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;  // Random 0 or 1
            }
        }
    }

    // Step 2: Display results for each branch
    for (branch = 0; branch < 3; branch++) {
        printf("\n============================\n");
        printf("BRANCH %d OCCUPANCY REPORT\n", branch + 1);
        printf("============================\n");
        printf("Floor\tOccupied\tVacant\n");

        for (floor = 0; floor < 5; floor++) {
            occupied = 0;
            vacant = 0;

            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    occupied++;
                else
                    vacant++;
            }

            printf("%d\t%d\t\t%d\n", floor + 1, occupied, vacant);
        }
    }

    printf("\n=====================================================\n");
    printf("         END OF HOTEL CHAIN OCCUPANCY REPORT\n");
    printf("=====================================================\n");

    return 0;
}

