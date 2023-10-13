#include <stdio.h>

int main() {

    // Neu dung scanf thi truoc khi doc string phai can den: while ((c = getchar()) != '\n' && c != EOF) {}
    // Neu dung gets() de doc ca dong thi khong can
    // Truoc khi doc so thi khong can dung.

    // while (getchar() != '\n' && getchar() != EOF) {}
    // fgets(hoVaTen, 50, stdin);

    printf("Nhap ho va ten: ");
    char hoVaTen[50];
    // scanf("%s", hoVaTen);
    gets(hoVaTen);
    int c;
    printf("Ho va ten: %s\n", hoVaTen);

    printf("Nhap dia chi: ");
    char diaChi[50];
    // while ((c = getchar()) != '\n' && c != EOF) {}
    gets(diaChi);
    // fgets(diaChi, 50, stdin);
    printf("Dia chi: %s\n", diaChi);

    printf("Nhap tuoi: ");
    int tuoi;
    scanf("%d", &tuoi);
    printf("Tuoi: %d\n", tuoi);

    printf("Nhap so thich: ");
    char soThich[50];
    while ((c = getchar()) != '\n' && c != EOF) {}
    gets(soThich);
    printf("So thich: %s", soThich);


    return 0;
}