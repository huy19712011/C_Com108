#include <stdio.h>
#include <stdbool.h>

int main() {

    // boolean: true = 1; false = 0
    bool check;

    check = 16 > 5;

    printf("%d", check);

    printf("\n%s", check ? "true" : "false");

    check = 25 + 3 * 2 != 18;

    printf("\n%s", check ? "true" : "false");

    check = 16 > 8 || 7 > 9;
    printf("\n%s", check ? "true" : "false");





    return 0;
}