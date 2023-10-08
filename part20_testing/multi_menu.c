#include <stdio.h>

// Hàm để thực hiện nhiệm vụ của chương trình con 1
void program1() {
    int subChoice;
    do {
        printf("Chương trình con 1 - Menu:\n");
        printf("1. Tùy chọn 1\n");
        printf("2. Tùy chọn 2\n");
        printf("3. Tùy chọn 3\n");
        printf("4. Tùy chọn 4\n");
        printf("5. Tùy chọn 5\n");
        printf("0. Quay lại menu chính\n");
        printf("Chọn một tùy chọn: ");
        scanf("%d", &subChoice);

        switch (subChoice) {
            case 1:
                printf("Tùy chọn 1 của chương trình con 1 được chọn!\n");
                break;
            case 2:
                printf("Tùy chọn 2 của chương trình con 1 được chọn!\n");
                break;
            case 3:
                printf("Tùy chọn 3 của chương trình con 1 được chọn!\n");
                break;
            case 4:
                printf("Tùy chọn 4 của chương trình con 1 được chọn!\n");
                break;
            case 5:
                printf("Tùy chọn 5 của chương trình con 1 được chọn!\n");
                break;
            case 0:
                printf("Quay lại menu chính.\n");
                break;
            default:
                printf("Tùy chọn không hợp lệ. Vui lòng chọn lại.\n");
                break;
        }
    } while (subChoice != 0);
}

// Hàm để thực hiện nhiệm vụ của chương trình con 2
void program2() {
    int subChoice;
    do {
        printf("Chương trình con 2 - Menu:\n");
        printf("1. Tùy chọn A\n");
        printf("2. Tùy chọn B\n");
        printf("3. Tùy chọn C\n");
        printf("4. Tùy chọn D\n");
        printf("5. Tùy chọn E\n");
        printf("0. Quay lại menu chính\n");
        printf("Chọn một tùy chọn: ");
        scanf("%d", &subChoice);

        switch (subChoice) {
            case 1:
                printf("Tùy chọn A của chương trình con 2 được chọn!\n"); 
                break;
            case 2:
                printf("Tùy chọn B của chương trình con 2 được chọn!\n");
                break;
            case 3:
                printf("Tùy chọn C của chương trình con 2 được chọn!\n");
                break;
            case 4:
                printf("Tùy chọn D của chương trình con 2 được chọn!\n");
                break;
            case 5:
                printf("Tùy chọn E của chương trình con 2 được chọn!\n");
                break;
            case 0:
                printf("Quay lại menu chính.\n");
                break;
            default:
                printf("Tùy chọn không hợp lệ. Vui lòng chọn lại.\n");
                break;
        }
    } while (subChoice != 0);
}

// Hàm để thực hiện nhiệm vụ của chương trình con 3
void program3() {
    printf("Chương trình con 3 được chọn!\n");
}

// Hàm để thực hiện nhiệm vụ của chương trình con 4
void program4() {
    printf("Chương trình con 4 được chọn!\n");
}

// Hàm để thực hiện nhiệm vụ của chương trình con 5
void program5() {
    printf("Chương trình con 5 được chọn!\n");
}

// Hàm để thực hiện nhiệm vụ của chương trình con 6
void program6() {
    printf("Chương trình con 6 được chọn!\n");
}

// Hàm để thực hiện nhiệm vụ của chương trình con 7
void program7() {
    printf("Chương trình con 7 được chọn!\n");
}

// Hàm để thực hiện nhiệm vụ của chương trình con 8
void program8() {
    printf("Chương trình con 8 được chọn!\n");
}

// Hàm để thực hiện nhiệm vụ của chương trình con 9
void program9() {
    printf("Chương trình con 9 được chọn!\n");
}

// Hàm để thực hiện nhiệm vụ của chương trình con 10
void program10() {
    printf("Chương trình con 10 được chọn!\n");
}

int main() {
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Chương trình con 1\n");
        printf("2. Chương trình con 2\n");
        printf("3. Chương trình con 3\n");
        printf("4. Chương trình con 4\n");
        printf("5. Chương trình con 5\n");
        printf("6. Chương trình con 6\n");
        printf("7. Chương trình con 7\n");
        printf("8. Chương trình con 8\n");
        printf("9. Chương trình con 9\n");
        printf("10. Chương trình con 10\n");
        printf("0. Thoát\n");
        printf("Chọn một tùy chọn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                program1();
                break;
            case 2:
                program2();
                break;
            case 3:
                program3();
                break;
            case 4:
                program4();
                break;
            case 5:
                program5();
                break;
            case 6:
                program6();
                break;
            case 7:
                program7();
                break;
            case 8:
                program8();
                break;
            case 9:
                program9();
                break;
            case 10:
                program10();
                break;
            case 0:
                printf("Thoát khỏi chương trình.\n");
                break;
            default:
                printf("Tùy chọn không hợp lệ. Vui lòng chọn lại.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
