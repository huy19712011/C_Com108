#include <stdio.h>

int main() {

    // Input positive number from keyboard
    // int number = 0;
    // do {
    //     printf("Input positive number: ");
    //     scanf("%d", &number);

    // } while (number < 0);

    // Input only number from 5-10
    // int number = 0;
    // do {
    //     printf("Input number from 5 - 10: ");
    //     scanf("%d", &number);

    //     if (!(5 <= number && number <= 10)) {
    //         printf("number must be in range 5-10\n");
    //     }

    // } while (!(5 <= number && number <= 10));

    // Demo: Tinh tông cac so duong nhap tu ban phim, neu nhap so am thi in tong roi thoat ra
    int number = 0;
    int sum = 0;
    do {
        printf("Input number: ");               
        scanf("%d", &number);
        if (number > 0) {
            sum += number;
        }
    } while (number > 0);
    printf("Sum = %d", sum);

    return 0;
}