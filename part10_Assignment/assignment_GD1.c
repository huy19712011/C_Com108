#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(int argc, char *argv[]) {
    int exit = 0;
    do {
        printf("1. Kiem tra so nhap vao\n");
        printf("2. Tim uoc so chung va boi chung cua 2 so\n");
        printf("3. Tinh tien quan karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("0. Thoat Chuong trinh!!!\n");
        printf("Chon (0-5): ");
        
        int choice;
        scanf("%d", &choice);
        switch (choice) {
        case 1: {
            int so;
            int i;
            int is_prime;
            int is_square = 0;
            
            printf("nhap 1 so nguyen:");
            scanf("%d", &so);
            for (i = 2; i <= sqrt(so); i++) {
                if (so % i == 0) {
                    is_prime = 0;
                }
                if (i * i == so) {
                    is_square = 1;
                }
            }
            if (is_prime == 0) {
                printf("%d la so nguyen to\n", so);
            } else {
                printf("%d khong la so nguyen to\n", so);
            }

            if (is_square == 1) {
                printf("%d la chinh phuong\n\n\n", so);
            } else {
                printf("%d khong la chinh phuong\n", so);
            }
            printf("--------------------------------------\n");
        } 
        break;

        case 2: {
            int a, b, uc, bc;
            printf("Nhap (a,b): ");
            scanf("%d%d", &a, &b);
            for (uc = a; uc >= 1; uc--) {
                if (a % uc == 0 && b % uc == 0) {
                    printf("UCLN(%d,%d)=%d\n", a, b, uc);
                    break;
                }
            }
            for (bc = a; bc <= a * b; bc++) {
                if (bc % a == 0 && bc % b == 0) {
                    printf("BCNN(%d,%d)=%d\n", a, b, bc);
                }
            }
            printf("--------------------------------------\n");
        } 
        break;

        case 3: {
            int bd, kt;
            printf("Nhap gio bat dau:");
            scanf("%d", &bd);
            printf("Nhap gio ket thuc:");
            scanf("%d", &kt);
            int soGioHat = kt - bd;
            int Tongtien = 0;
            int gioThem;
            int tienThem;
            if (soGioHat <= 3) {
                Tongtien = soGioHat * 150000;
            } else {
                gioThem = soGioHat - 3;
                tienThem = gioThem * 150000 * 0.7;
                Tongtien = 3 * 150000 + tienThem;
            }
            if (bd >= 14 && bd <= 17) {
                Tongtien = Tongtien * 0.9;
            }
            printf("So tien quy khach phai thanh toan la: %d VND\n", Tongtien);
            printf("--------------------------------------\n");
        } 
        break;

        case 4: {
            float kwh;
            float tiendien;
            float bac1 = 1.678;
            float bac2 = 1.734;
            float bac3 = 2.014;
            float bac4 = 2.536;
            float bac5 = 2.834;
            float bac6 = 2.917;
            printf("Nhap so kwh da su dung:");
            scanf("%f", &kwh);
            if (kwh <= 50) {
                float tiendien = kwh * bac1;
                printf("tiendien=%f\n", tiendien);
            } else if (51 <= kwh) {
                float tiendien = 50 * bac1 + ((kwh - 50) * bac2);
                printf("tiendien=%f\n", tiendien);
            } else if (101 <= kwh) {
                float tiendien = 50 * bac1 + (50 * bac2) + ((kwh - 100) * bac3);
                printf("tiendien=%f\n", tiendien);
            } else if (201 <= kwh) {
                float tiendien = 50 * bac1 + (50 * bac2) + (100 * bac3) + ((kwh - 200) * bac4);
                printf("tiendien=%f\n", tiendien);
            } else if (301 <= kwh) {
                float tiendien = 50 * bac1 + (50 * bac2) + (100 * bac3) + (100 * bac4) + ((kwh - 300) * bac5);
                printf("tiendien=%f\n", tiendien);
            } else if (kwh > 400) {
                float tiendien = 50 * bac1 + (50 * bac2) + (100 * bac3) + (100 * bac4) + (100 * bac5) + ((kwh - 400) * bac6);
                printf("tiendien=%f\n", tiendien);
            }
            printf("--------------------------------------\n");
        } 
        break;

        case 5: {
            int sotien;
            printf("Nhap so tien can doi:");
            scanf("%d", &sotien);
            //	    doitien(sotien);
            int menhgia[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
            int somenhgia[9] = {0};
            int i = 0;
            int j;
            while (i < 9) {
                if (sotien > menhgia[i]) {
                    break;
                }
                i++;
            }
            while (i < 9 && sotien > 0) {
                somenhgia[i] = sotien / menhgia[i];
                sotien = sotien % menhgia[i];
                i++;
            }
            printf("So tien doi duoc la:");
            for (j = 0; j < 9; j++) {
                if (somenhgia[j] > 0) {
                    printf("%d to %d\n", somenhgia[j], menhgia[j]);
                }
            }
            printf("--------------------------------------\n");
        } 
        break;
        case 0: {
            exit = 1;
            printf("Ban da thoat chuong trinh!!!");
        } 
        break;
        }
    } while (exit != 1);

    return 0;
}
