#include <stdio.h>

int main() {

    // switch ... case
    // expresion return numeric
    // menu example
    printf("Kiem tra kien thuc mon hoc Lap trinh can ban C\n");
    printf("Cau hoi: mon hoc nay co may bai lab?\n");
    printf("1. Co 6 bai lab\n");
    printf("2. Co 7 bai lab\n");
    printf("3. Co 8 bai lab\n");
    printf("4. Co 9 bai lab\n");
    printf("Hay chon dap an: ");

    int chon;
    scanf("%d", &chon);
    switch (chon) {
    case 1:
        printf("Ban da tra loi sai");
        break;
    case 2:
        printf("Ban da tra loi sai");
    case 3:
        printf("Ban da tra loi dung");
        break;
    case 4:
        printf("Ban da tra loi sai");
        break;
    default:
        printf("Can than: Ban chon khong dung bo cau tra loi");
    }
    
    // switch (chon) {
    // case 1:
    // case 2:
    // case 4:
    //     printf("Ban da tra loi sai");
    //     break;
    // case 3:
    //     printf("Ban da tra loi dung");
    //     break;
    // default:
    //     printf("Chu y: Ban can chon dung so");
    // }

    return 0;
}