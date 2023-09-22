#include <stdio.h>

int main() {

    printf("Ban hay nhap diem: ");
    double diem;
    scanf("%lf", &diem);

    if (9 <= diem && diem <=10) {
        printf("Hoc sinh xuat sac");
    }
    else if (8 <= diem)
    {
        printf("Hoc sing gioi");
    }
    else if (7 <= diem)
    {
        printf("Hoc sinh kha");
    }
    else if (5 <= diem)
    {
        printf("Hoc sing trung binh");
    }
    else if (3 <= diem)
    {
        printf("Hoc sinh yeu");
    }
    else 
    {
        printf("Hoc sinh kem");
    }
    
    
    
    

    return 0;
}