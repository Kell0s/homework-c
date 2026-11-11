#include <stdio.h>

int main(void) {
    int i;
    int a;
    unsigned int h;
    int r;
    int c;

    while (1) {
        printf("Выбери пункт:\n"
               "1. dec -> hex\n"
               "2. dec -> oct\n"
               "3. dec -> bin\n"
               "4. hex -> dec\n"
               "5. exit\n");

        r = scanf("%d", &i);

        if (r == EOF) {
            printf("\n");
            return 0;
        } else if (r != 1) {
            printf("Вы указали не число\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            continue;
        } else if (i < 1 || i > 5) {
            printf("Вы выбрали не верный пункт\n");
            continue;
        } else
            switch (i) {
            case 1:
                printf("Введите число: ");
                r = scanf("%d", &a);
                if (r == 1) {
                    printf("Перевод: %x\n", a);
                } else if (r == EOF) {
                    printf("\n");
                    return 0;
                } else {
                    printf("Вы указали не число\n");
                    while ((c = getchar()) != '\n' && c != EOF) {
                    }
                }
                break;
            case 2:
                printf("Введите число: ");
                r = scanf("%d", &a);
                if (r == 1) {
                    printf("Перевод: %o\n", a);
                } else if (r == EOF) {
                    printf("\n");
                    return 0;
                } else {
                    printf("Вы указали не число\n");
                    while ((c = getchar()) != '\n' && c != EOF) {
                    }
                }
                break;
            case 3:
                printf("Введите число: ");
                r = scanf("%d", &a);
                if (r == 1) {
                    unsigned int u = a;
                    int bits[32];
                    int n = 0;

                    do {
                        bits[n] = u % 2;
                        u /= 2;
                        n++;
                    } while (u > 0);

                    printf("Перевод: ");
                    while (n > 0) {
                        n--;
                        printf("%d", bits[n]);
                    }
                    printf("\n");
                } else if (r == EOF) {
                    printf("\n");
                    return 0;
                } else {
                    printf("Вы указали не число\n");
                    while ((c = getchar()) != '\n' && c != EOF) {
                    }
                }
                break;
            case 4:
                printf("Введите число: ");
                r = scanf("%x", &h);
                if (r == 1) {
                    printf("Перевод: %u\n", h);
                } else if (r == EOF) {
                    printf("\n");
                    return 0;
                } else {
                    printf("Вы указали не число\n");
                    while ((c = getchar()) != '\n' && c != EOF) {
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
