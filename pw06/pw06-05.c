#include <stdio.h>

int main(void) {
    int i;
    int a;

    while (1) {
        printf("Выбери пункт:\n"
               "1. dec -> hex\n"
               "2. dec -> oct\n"
               "3. dec -> bin\n"
               "4. hex -> dec\n"
               "5. exit\n");

        if (scanf("%d", &i) != 1) {
            printf("Вы указали не число\n");
            while (getchar() != '\n') {
            }
            continue;
        } else if (i < 1 || i > 5) {
            printf("Вы выбрали не верный пункт\n");
            continue;
        } else
            switch (i) {
            case 1:
                printf("Введите число: ");
                if (scanf("%d", &a) == 1) {
                    printf("Перевод: %x\n", a);
                } else {
                    printf("Вы указали не число\n");
                    while (getchar() != '\n') {
                    }
                }
                break;
            case 2:
                printf("Введите число: ");
                if (scanf("%d", &a) == 1) {
                    printf("Перевод: %o\n", a);
                } else {
                    printf("Вы указали не число\n");
                    while (getchar() != '\n') {
                    }
                }
                break;
            case 3:
                printf("Введите число: ");
                if (scanf("%d", &a) == 1) {
                    printf("Перевод: %b\n", a);
                } else {
                    printf("Вы указали не число\n");
                    while (getchar() != '\n') {
                    }
                }
                break;
            case 4:
                printf("Введите число: ");
                if (scanf("%x", &a) == 1) {
                    printf("Перевод: %d\n", a);
                } else {
                    printf("Вы указали не число\n");
                    while (getchar() != '\n') {
                    }
                }
                break;
            case 5:
                printf("Вы вышли\n");
                return 0;
            }
    }

    return 0;
}

// ВАРИАНТ 25
