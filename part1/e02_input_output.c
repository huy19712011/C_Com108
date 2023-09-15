#include <stdio.h>

int main() {

    // Output: print to console
    // print text
    // print numbers

    // 1
    // printf("Hello everyone");

    // 2
    // int number = 100;
    // printf("\n%d", number);
    // printf("\t%d", number);

    // Input: from keyboard, from files, from database
    // 3
    // int age;
    // printf("Input your age: ");

    // // fflush(stdout);
    // scanf("%d", &age);

    // printf("You are %d years old", age);

    // 4. buffer problem

    // char name[30];
    // printf("Input your name: ");
    // scanf("%s", name);

    // int age;
    // printf("Input your age: ");
    // scanf("%d", &age);

    // char class[10];
    // printf("Input your class: ");
    // scanf("%s", class);

    // printf("You are %s, %d, in %s class", name, age, class);

    char firstName[10], middleName[10], lastName[10];

    // Scan input from user -
    // nguyen quang huy for example
    printf("input first name: \n");
    scanf("%s", firstName);

    printf("Input age: \n");
    int age;
    scanf("%d", &age);
    // fseek(stdin, 0, SEEK_END);
    // fflush(stdin);

    // int c;
    // while ((c = getchar()) != '\n' && c != EOF) {
    //     printf("ok\n");
    // }
    printf("Input level: \n");
    int level;
    scanf("%d", &level);

    printf("input middle name: \n");
    scanf("%s", middleName);
    printf("input last name: \n");
    scanf("%s", lastName);

    printf("%s %s %s %d %d", firstName, middleName, lastName, age, level);

    return 0;
}