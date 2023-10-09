#include <stdio.h>
#include <string.h>

int main() {

    // last character '\0' Null
    char hoten[30]; // string with 29 character + '\0'

    // khai bao chuoi
    char str[20]; // chuoi str co kich thuoc 20 ky tu ke ca null

    // array of Strings ~ 2D Array
    char otherStr[3][10]; // array of strings with 3 String, maximum of each array <= 10 ky tu

    // khai bao + khoi tao
    char truong[20] = {'F', 'P', 'T', 'P', 'o', 'l', 'y'}; //FPT Poly

    char str2[] = {'P', 'o', 'l', 'y', ' ', 'F'}; // auto detect length

    // functions/methods
    // output
    printf("%s\n", str2);

    puts("Tu dong xuong dong"); // tu dong xuong dong

    // input
    // scanf: doc den ky tu trang
    char monHoc[50];
    printf("Input mon hoc: ");
    scanf("%s", monHoc);
    printf("Mon hoc = %s\n", monHoc);

    fflush(stdin); // doc ky tu xuong dong

    // gets: doc den khi gap ky tu xuong dong
    char hoVaTen[50];
    printf("Nhap ho ten: ");
    // gets(hoVaTen);
    fgets(hoVaTen, 50, stdin);
    printf("Ho va ten: %s\n", hoVaTen);

    // string.h
    // strlen: tim do dai
    printf("Do dai chuoi truong: %d\n", strlen(truong));

    // copy
    char truongKhac[20];
    strcpy(truongKhac, truong);
    printf("Truong khac: %s\n", truongKhac);

    // concat
    char s1[50] = "Hello, ";
    char s2[] = "world!";
    // Concatenate str2 to the end of str1
    strcat(s1, s2);
    // Print the concatenated string
    printf("Concatenated String: %s\n", s1);

    char hi[] = "Hi ";
    char world[] = "World!";
    strcat(hi, world);
    printf("new = %s\n", hi);


    

    return 0;
}