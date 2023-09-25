#include <stdio.h>

int main() {

    // print numbers from 1 - 5
    // int i = 1;
    // while (i <= 5) {
    //     printf("%d\t", i);
    //     i++;
    // }

    // print Hello World 5 times

    // print 2 4 6 8 10
    // int i = 2;
    // while (i <= 10) {
    //     printf("%d\t", i);
    //     i = i + 2;
    // }

    // sum from 1...5
    // int i = 1;
    // int sum = 0;
    // while (i <= 5) {
    //     sum = sum + i;
    //     i = i + 1;
    // }
    // printf("Gia tri can tim la: %d", sum);

    // Demo: Bang cuu chuong 7
    // int i = 1;
    // while (i <= 9) {
    //     printf("7 x %d = %2d\n", i, 7 * i);
    //     i++;
    // }

    // Demo: TBC cacs so chia het cho 3 trong khoang 3-:-20
    // int i = 3;
    // int sum = 0;
    // int dem = 0;

    // while (i <= 20) {
    //     if (i % 3 == 0) {
    //         dem++;
    //         sum+=i;
    //     }
    //     i++;
    // }

    // float avg = (float) sum/dem; 

    // printf("Tong = %d, so luong = %d, TBC = %.2f", sum, dem, avg);

    // Demo
    // int i = 6;
    // while (i % 5 != 0) {
    //     if (i % 2 != 0) {
    //         printf("%d", i);
    //     }
    //     i++;
    // }

    // Demo: tinh tong tu min den max
    int min, max;
    printf("Input min: ");
    scanf("%d", &min);
    printf("Input max: ");
    scanf("%d", &max);

    int i = min;
    int sum = 0;
    while (i <= max) {
        sum+=i;

        i++;
    }
    printf("Tong = %d", sum);

    return 0;
}