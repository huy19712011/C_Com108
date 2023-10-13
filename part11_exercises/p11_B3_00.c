#include <stdio.h>

// Hàm để tìm vị trí của lớp có số lượng sinh viên ít nhất
int timLopNhoNhat(int lop[], int n) {
    int minLop = lop[0];
    int viTri = 0;

    for (int i = 1; i < n; i++) {
        if (lop[i] < minLop) {
            minLop = lop[i];
            viTri = i;
        }
    }

    return viTri;
}

int main() {
    int n;
    printf("Moi nhap tong so lop: ");
    scanf("%d", &n);

    int lop[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap so luong sinh vien cua lop thu %d: ", i + 1);
        scanf("%d", &lop[i]);
    }

    // Đếm số lớp có số lượng sinh viên ít hơn 30
    int countLopNhoHon30 = 0;
    for (int i = 0; i < n; i++) {
        if (lop[i] < 30) {
            countLopNhoHon30++;
        }
    }

    printf("So luong cac lop la: %d\n", n);
    printf("So luong sinh vien cac lop da nhap vao la: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", lop[i]);
    }

    printf("\nVi tri cac lop co so luong SV nho hon 30: ");
    for (int i = 0; i < n; i++) {
        if (lop[i] < 30) {
            printf("%d\t", i + 1);
        }
    }

    int viTriLopNhoNhat = timLopNhoNhat(lop, n);
    printf("\nVi tri cua lop co so luong sinh vien nho nhat la: %d\n", viTriLopNhoNhat + 1);

    return 0;
}