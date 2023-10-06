#include <stdio.h>

int main() {

    // Declare a 2D array
    int myArray2[3][4]; // This creates a 3x4 integer array

    // Initialize a 2D array
    int myArray[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int value = myArray[1][2]; // Accesses the element in the second row and third column (7)

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    // Sum of all elements
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            sum += myArray[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);

    
    int target = 8;
    int found = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (myArray[i][j] == target) {
                printf("Found %d at position (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) {
        printf("%d not found in the array\n", target);
    }

    return 0;
}