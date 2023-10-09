#include <stdio.h>
#include <string.h>

int main() {
    // String Functions

    // // compare
    // char str1[30];
    // char str2[30];

    // printf("Input str1: ");
    // gets(str1);
    // printf("Input str2: ");
    // gets(str2);

    // printf("str1 = %s\n", str1);
    // printf("str2 = %s\n", str2);
    // if (strcmp(str1, str2) == 0) {
    //     printf("2 chuoi giong nhau");
    // }
    // else if (strcmp(str1, str2) > 0) {
    //     printf("Chuoi 1 > chuoi 2");
    // }
    // else {
    //     printf("Chuoi 1 < chuoi 2");
    // }

    // // strrev(): dao nguoc
    // char str3[30];
    // printf("Input str3: ");
    // gets(str3);
    // printf("Chuoi ban dau: %s\n", str3);
    // printf("Chuoi dao nguoc: %s\n", strrev(str3));

    // // strlwr(): chu thuong
    // // strupr(): chu HOA
    // char str4[30];
    // printf("Input str4: ");
    // gets(str4);
    // printf("Chuoi ban dau: %s\n", str4);
    // printf("Chuoi dao nguoc: %s\n", strlwr(str4));

    // searching sub-string
    // strstr()
    // char str5[] = "Hello World";
    // char str6[] = "W";
    // printf("%d\n", strstr(str5, str6));

    const char *haystack = "Poly F dao tao lap trinh";
    const char *needle = "lap";

    char *result = strstr(haystack, needle);

    if (result != NULL) {
        printf("Found '%s' in '%s' at position %ld\n", needle, haystack, result - haystack);
    } else {
        printf("'%s' not found in '%s'\n", needle, haystack);
    }

    return 0;
}