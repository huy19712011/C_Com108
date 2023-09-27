#include <stdio.h>

int main() {

    // break
    // int i;

    // for (i = 1; i <= 10; i++) {
    //     if (i == 5) {
    //         printf("Breaking out of the loop at i=%d\n", i);
    //         break; // Exit the loop when i is 5
    //     }
    //     printf("i = %d\n", i);
    // }

    // printf("Loop finished.\n");

    // continue
    // int i;

    // for (i = 1; i <= 5; i++) {
    //     if (i == 3) {
    //         printf("Skipping i=%d\n", i);
    //         continue; // Skip the rest of the current iteration when i is 3
    //     }
    //     printf("i = %d\n", i);
    // }

    // printf("Loop finished.\n");
    // return 0;

    // Demo on slide 4
    int x = 2;
    while (x < 7) {
        if (x % 2 == 0) {
            x++;
            continue;
        } else {
            x++;
        }
        printf("%d \n", x);
    }

    return 0;
}