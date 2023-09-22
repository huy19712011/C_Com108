#include <stdio.h>

int main() {

    // Example: Calculator
    // Using switch case
    printf("Input 2 value: ");
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);
    // printf("2 so %lf, %lf", x, y);

    printf("\nOperators\n");
    printf("a. cong\n");
    printf("b. tru\n");
    printf("c. nhan\n");
    printf("d. chia\n");

    printf("Choose operator: ");
    char action;
    // scanf("%s", &action);
    scanf(" %c", &action); // note: space before %c !!!

    switch (action) {
    case 'a':
        printf("Result %lf", x + y);
        break;
    case 'b':
        printf("Result %lf", x - y);
        break;
    case 'c':
        printf("Result %lf", x * y);
        break;
    case 'd':
        printf("Result %lf", x / y);
        break;

    }

    return 0;
}