#include "myarrfunc.h"
#include <stdio.h>

int setSize(void) {
    int c;

    while (1) {
        int temp_size;
        int s;

        printf("Введите размер массива: ");
        s = scanf("%d", &temp_size);

        if (s == EOF) {
            return -1;
        }

        if (s != 1) {
            printf("Вы ввели не число\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            if (c == EOF)
                return -1;
            continue;
        }

        if (temp_size < 1) {
            printf("Вы ввели размер меньше 1\n");
            continue;
        } else if (temp_size > 1000) {
            printf("Макс. размер массива 1000\n");
            continue;
        } else {
            printf("Размер применен\n");
            return temp_size;
        }
    }
}

int fillArray(int *arr, int size) {
    int c;

    if (size == 0) {
        printf("Сначала задайте размер массива\n");
        return 0;
    }

    printf("Заполните массив:\n");

    int j = 0;

    while (j < size) {
        int s;

        s = scanf("%d", arr + j);

        if (s == EOF) {
            return -1;
        }

        if (s != 1) {
            printf("Вы ввели не число\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            if (c == EOF)
                return -1;

            continue;
        }

        j++;
    }

    while ((c = getchar()) != '\n' && c != EOF) {
    }

    if (c == EOF) {
        return -1;
    }

    return 1;
}

void printArray(int *arr, int size, int filled) {
    if (checkArray(size, filled) == 0) {
        return;
    }

    printf("Индекс\tЗначение\tАдрес\n");

    for (int j = 0; j < size; j++) {
        printf("%d\t%d\t\t%p\n", j, *(arr + j), (void *)(arr + j));
    }
}

int checkArray(int size, int filled) {
    if (size == 0) {
        printf("Сначала задайте размер массива\n");
        return 0;
    }

    if (filled == 0) {
        printf("Сначала заполните массив\n");
        return 0;
    }

    return 1;
}

int inputRange(int size, int *k, int *m) {
    int c;

    while (1) {
        printf("Введите индексы k и m: ");

        int s = scanf("%d %d", k, m);

        if (s == EOF) {
            return -1;
        }

        if (s != 2) {
            printf("Введите два целых числа\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            if (c == EOF) {
                return -1;
            }

            continue;
        }

        if (*k < 0 || *m < 0) {
            printf("Индексы не могут быть отрицательными\n");
            continue;
        }

        if (*k >= size || *m >= size) {
            printf("Индексы выходят за границы массива\n");
            continue;
        }

        if (*k > *m) {
            printf("k не может быть больше m\n");
            continue;
        }

        return 1;
    }
}

int inputK(int *k) {
    int c;

    while (1) {
        printf("Введите значение k: ");
        int s = scanf("%d", k);

        if (s == EOF) {
            return -1;
        }

        if (s != 1) {
            printf("Вы ввели не число\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            if (c == EOF) {
                return -1;
            }

            continue;
        }

        return 1;
    }
}

int minArr(int *arr, size_t n, int k, int m) {
    int min = *(arr + k);

    for (k++; k <= m && (size_t)k < n; k++) {
        if (min > *(arr + k))
            min = *(arr + k);
    }

    return min;
}

int rangeArr(int *arr, size_t n, int k, int m) {
    int min = *(arr + k);
    int max = *(arr + k);

    for (k++; k <= m && (size_t)k < n; k++) {
        if (min > *(arr + k))
            min = *(arr + k);

        if (max < *(arr + k))
            max = *(arr + k);
    }

    return max - min;
}

int indexArr(int *arr, size_t n, int k) {
    int cnt = 0;

    printf("Индексы элементов:");

    for (int i = 0; i < n; i++) {
        if (*(arr + i) < k) {
            printf(" %d", i);
            cnt++;
        }
    }

    printf("\n");

    if (cnt == 0) {
        printf("Подходящие элементы не найдены\n");
        return -1;
    }

    return cnt;
}

int exitMenu(void) {
    printf("Вы уверены, что хотите выйти?\n"
           "\"Y\" or \"N\"\n");

    while (1) {
        char a;
        int s;

        s = scanf(" %c", &a);

        if (s == EOF) {
            return 1;
        }

        switch (a) {
        case 'Y':
            printf("Завершение программы.\n");
            return 1;

        case 'N':
            printf("Возвращаем вас в меню...\n");
            return 0;

        default:
            printf("Неверный ответ\n");
            continue;
        }
    }
}
