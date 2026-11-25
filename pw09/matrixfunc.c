#include "matrixfunc.h"
#include <stddef.h>
#include <stdio.h>

int setSize(int *rows, int *cols) {
    int c;

    while (1) {
        int temp_rows, temp_cols;
        int s;

        printf("Введите количество строк и столбцов: ");
        s = scanf("%d %d", &temp_rows, &temp_cols);

        if (s == EOF) {
            return -1;
        }

        if (s != 2) {
            printf("Введите два целых числа\n");

            while ((c = getchar()) != '\n' && c != EOF) {
            }

            if (c == EOF)
                return -1;

            continue;
        }

        if (temp_rows < 1 || temp_cols < 1) {
            printf("Размеры должны быть больше 0\n");
            continue;
        }

        if (temp_rows > 1000 / temp_cols) {
            printf("Макс. количество элементов — 1000\n");
            continue;
        }

        *rows = temp_rows;
        *cols = temp_cols;

        printf("Размер применен\n");
        return 1;
    }
}

int fillMatrix(int *mat, int rows, int cols) {
    int c;

    if (rows == 0 || cols == 0) {
        printf("Сначала задайте размер матрицы\n");
        return 0;
    }

    printf("Заполните матрицу:\n");

    int j = 0;

    while (j < rows * cols) {
        int s;

        s = scanf("%d", mat + j);

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

void printMatrix(int *mat, int rows, int cols, int filled) {
    if (checkMatrix(rows, cols, filled) == 0) {
        return;
    }

    printf("Строка\tСтолбец\tЗначение\tАдрес\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t%d\t%d\t\t%p\n",
                   i, j,
                   *(mat + i * cols + j),
                   mat + i * cols + j);
        }
    }
}

int checkMatrix(int rows, int cols, int filled) {
    if (rows == 0 || cols == 0) {
        printf("Сначала задайте размер матрицы\n");
        return 0;
    }

    if (filled == 0) {
        printf("Сначала заполните матрицы\n");
        return 0;
    }

    return 1;
}

int inputRange(int rows, int *k, int *m, int checkIndex) {
    int c;

    while (1) {
        printf("Введите k и m: ");

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

        if (*k > *m) {
            printf("k не может быть больше m\n");
            continue;
        }

        if (checkIndex == 1) {
            if (*k < 0 || *m < 0) {
                printf("Индексы не могут быть отрицательными\n");
                continue;
            }

            if (*k >= rows || *m >= rows) {
                printf("Индексы выходят за границы матрицы\n");
                continue;
            }
        }

        return 1;
    }
}

int minMatrix(int *mat, size_t rows, size_t cols) {
    int min = *mat;

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (min > *(mat + i * cols + j)) {
                min = *(mat + i * cols + j);
            }
        }
    }

    return min;
}

int countMatrix(int *mat, size_t rows, size_t cols, int k, int m) {
    int cnt = 0;

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (*(mat + i * cols + j) >= k &&
                *(mat + i * cols + j) <= m)
                cnt++;
        }
    }

    return cnt;
}

int sumMatrix(int *mat, size_t rows, size_t cols, int k, int m) {
    int sum = 0;

    for (int i = k; i <= m; i++) {
        for (int j = 0; j < cols; j++) {
            sum += *(mat + i * cols + j);
        }
    }

    return sum;
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
