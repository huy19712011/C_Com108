#include <stdio.h>

void tinhVaInTong2So() {
    // body
    int a, b, tong;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    tong = a + b;

    printf("Tong = %d", tong);
}

void tinhVaInTong2SoV2(int a, int b) {
    int tong;
    tong = a + b;
    printf("Tong = %d", tong);
}

int tinhTong2So() {
    int a, b, tong;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    tong = a + b;

    return tong;
}

int tinhTong2So(int a, int b) {
    int tong = a + b;
    return tong;
}

int main() {

    // // Chuong trinh nhap vao 3 so nguyen duong
    // int x, y, z;
    // // Nhap so thu nhat
    // do {
    //     printf("X = ");
    //     scanf("%d", &x);
    // } while (x < 0);

    // // Nhap so thu hai
    // do {
    //     printf("X = ");
    //     scanf("%d", &y);
    // } while (x < 0);

    // // Nhap so thu ba
    // do {
    //     printf("X = ");
    //     scanf("%d", &z);
    // } while (x < 0);

    // Calling functions
    tinhVaInTong2So();

    return 0;
}