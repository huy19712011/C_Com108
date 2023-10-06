#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    int x;

    // Nhập chuỗi từ bàn phím
    printf("Input: ");
    fgets(input, sizeof(input), stdin);

    // Sử dụng strtol để chuyển đổi chuỗi thành số nguyên và kiểm tra kết quả
    char *endptr;
    x = strtol(input, &endptr, 10);

    if (*endptr == '\n' || *endptr == '\0') {
        printf("%d is int.\n", x);
    } else {
        printf("is not int\n");
    }

    return 0;
}





