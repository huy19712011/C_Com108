#include <stdio.h>

void wrapper(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a = 5;
    int b = 10;

    wrapper(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}