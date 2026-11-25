#include "matrixfunc.h"
#include <stdio.h>

#define MAXSIZE 1000

int main(void) {
    char i;
    int w;
    int k, m;

    int mat[MAXSIZE];
    int rows = 0;
    int cols = 0;
    int filled = 0;

    while (1) {
        printf("\nМЕНЮ:\n"
               "a\tЗадать размер матрицы\n"
               "b\tЗаполнить матрицу\n"
               "c\tПредставление матрицы (значения, адреса)\n"
               "d\tОпределение минимального элемента матрицы\n"
               "e\tКоличество элементов в диапазоне значений k–m\n"
               "f\tСумма элементов строк в диапазоне индексов k–m\n"
               "g\tВыход\n"
               "Выберите пункт: ");

        w = scanf(" %c", &i);

        if (w == EOF) {
            break;
        }

        switch (i) {
            // Задать размер массива
        case 'a':
            if (setSize(&rows, &cols) == -1)
                return 0;

            filled = 0;
            break;

        // Заполнить массив
        case 'b':
            if ((filled = fillMatrix(mat, rows, cols)) == -1)
                return 0;

            break;

            // Представление массива
        case 'c':
            printMatrix(mat, rows, cols, filled);
            break;

            // Функция 2
        case 'd':
            if (checkMatrix(rows, cols, filled) == 0) {
                break;
            }

            printf("Минимальное значение: %d\n",
                   minMatrix(mat, rows, cols));

            break;

            // Функция 18
        case 'e':
            if (checkMatrix(rows, cols, filled) == 0) {
                break;
            }

            if (inputRange(rows, &k, &m, 0) == -1) {
                return 0;
            }

            printf("Кол-во элементов: %d\n",
                   countMatrix(mat, rows, cols, k, m));

            break;

        // Функция 28
        case 'f':
            if (checkMatrix(rows, cols, filled) == 0) {
                break;
            }

            if (inputRange(rows, &k, &m, 1) == -1) {
                return 0;
            }

            printf("Сумма элементов строк: %d\n",
                   sumMatrix(mat, rows, cols, k, m));

            break;

        // Выход
        case 'g':
            if (exitMenu() == 1)
                return 0;

            break;

        default:
            printf("Вы выбрали неверный пункт\n");
            break;
        }
    }
    return 0;
}
