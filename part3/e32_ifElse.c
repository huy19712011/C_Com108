#include <stdio.h>

int main() {

    printf("Nhap diem thi: ");

    double diem;

    scanf("%lf", &diem);

    if (diem < 5) {
        printf("Ban da thi truot"   );
    } else {
        printf("Ban da qua mon");
    }

    return 0;
}