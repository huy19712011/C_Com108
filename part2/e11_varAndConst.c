#include <stdio.h>

#define minValue 10

int main() {

    // 1. const values
    const int max = 100;
    printf("Value of max is %d", max);
    printf("\nValue of min is %d", minValue);

    // // 100. Change constant value via pointer
    // // defining an integer constant
    // const int var = 10;
    // printf("Initial Value of Constant: %d\n", var);
    // // defining a pointer to that const variable
    // int *ptr = &var;
    // // changing value
    // *ptr = 500;
    // printf("Final Value of Constant: %d", var);

    return 0;
}