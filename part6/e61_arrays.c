#include <stdio.h>

int main() {

    // array
    // elements
    // index of elements
    // kich thuoc: so phan tu trong mang

    // Khai bao
    int a[3]; // a co 3 phan tu, gia tri moi phan tu khong xac dinh
    printf("%d\n", a[0]); // khong xac dinh
    printf("%d\n", a[1]); // khong xac dinh
    printf("%d\n", a[2]); // khong xac dinh
    
    // gan gia tri cho cac phan tu
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    printf("%d\n", a[1]);

    // Note: Phai xac dinh cu the so phan tu luc khai bao
    int n = 10; int b[n];
    b[0] = 1;
    printf("%d\n", b[0]); // 1
    printf("%d\n", b[5]); // khong xac dinh

    const int m = 20; int c[m]; // 20 phan tu gia tri khong xac dinh
    c[5] = 60;
    printf("%d\n", c[5]);
    printf("%d\n", c[19]);

    #define c2 5
    int d[c2];
    d[2] = 200;
    printf("%d\n", d[2]);

    // Khoi tao va gan gia tri
    int e[3] = {1, 2, 3}; // e co 3 phan tu 1 2 3

    int f[4] = {1, 2}; // f co 4 phan tu 1 2 0 0

    int g[5] = {}; // g co 5 phan tu bang 0;
    printf("%d\n", g[0]);

    int h[] = {50, 60, 70}; // h co 3 phan tu 50 60 70

    // length of array
    int length = sizeof(h) / sizeof(h[0]);
    printf("%d\n", length);

    int length2 = *(&h + 1) - h; //😒😒😒😒😒
    printf("%d\n", length2);

    // traversing arrays
    for (int i = 0; i < length; ++i) {
        printf("%d\t", h[i]);
    }



    return 0;
}