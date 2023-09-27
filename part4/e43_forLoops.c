#include <stdio.h>

int main() {
    // bang cuu chuong 8
    // for (int i = 1; i <= 10; i++) {
    //     printf("8 x %d = %d\n", i, 8 * i);
    // }

    // tong cac so tu 3 den 6
    // int tong = 0;
    // for (int i = 3; i <= 6; i++) {
    //     tong += i;
    // }
    // printf("tong = %d", tong);

    // tinh trung binh cong cac so tu nhien chia het cho 3 tu 3-20
    int tong = 0;
    int dem = 0;
    for (int i = 3; i <= 20; i++) {
        if (i % 3 == 0) {
            dem += 1;
            tong += i;
        }
    }
    float tbc = (float)tong / dem;
    printf("tong = %d, dem = %d, TBC = %.2f", tong, dem, tbc);g

    // Nhap so, kiem tra co phai so nguyen to khong?
    // printf("Input number: ");
    // int number = 0;
    // scanf("%d", &number);

    // int flag = 1; // 1: so nguyen to; 0 khong nguyen to
    // for (int i = 2; i <= number/2; i++) {
    //     if (number % i == 0) {
    //         flag = 0;
    //         break;
    //     }
    // }

    // if (flag == 1 && number != 1) {
    //     printf("%d la so nguyen to", number);
    // } else {
    //     printf("%d khong phai so nguyen to", number);
    // }

    return 0;
}