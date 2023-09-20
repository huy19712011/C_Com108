#include <stdio.h>

int main() {

    // control flow
    // if
    // Nhap diem thi; neu diem >= 5 -> thi do
    printf("Input diem: ");
    double diem;
    scanf("%lf", &diem);

    if (diem >= 5) {
        printf("Ban da thi do");
    }


    return 0;
}