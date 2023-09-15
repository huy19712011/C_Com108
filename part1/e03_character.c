#include <stdio.h>

int main() {

    // 1. Print ASCII table
    // printf("ASCII Table\n");
    // printf("-----------\n");
    // for(int i = 0; i <= 255; i++) {
    //     printf("%d\t%c\n", i, i);
    // }

    // 1a. ASCII
    // creating a loop iterating from 0 to 126
    //   for (char i = 0; i <= 126; i++) {
    //     printf("The ASCII value of %c is %d \n", i, i);
    //   }

    // 2. Print the value of character that user input
    // Input value
    // char ch;
    // printf("Enter character: ");
    // scanf("%c", &ch);
    // // display value of ch
    // printf("\nThe ASCII value of the %c is %d", ch, ch);
    // printf("\n%c", getchar(ch));

    // 3.
    char c;
    printf("please enter a character \n");
    while ((c = getchar()) != '\n') {
        printf("You enter %c, Ascii value is %d\n", c, c);
    }

    return 0;
}