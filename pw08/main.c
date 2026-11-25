#include "myarrfunc.h"
#include <stdio.h>

int main(void) {
    char i;
    int w;
    int c;
    int k, m;

    int arr[1000];
    int size = 0;
    int filled = 0;

    while (1) {
        printf("\nМЕНЮ:\n"
               "a\tЗадать размер массива\n"
               "b\tЗаполнить массив\n"
               "c\tПредставление массива (значения, адреса)\n"
               "d\tОпределение минимального значения массива в заданном диапазоне индексов k–m\n"
               "e\tРазница между минимальным и максимальным значением элементов массива взаданном диапазоне индексов k–m\n"
               "f\tОпределение индексов элементов массива по значению ниже введенного k\n"
               "g\tВыход\n"
               "Выберите пункт:");

        w = scanf(" %c", &i);

        if (w == EOF) {
            break;
        }

        switch (i) {
            // Задать размер массива
        case 'a':
            if ((size = setSize()) == -1)
                return 0;

            filled = 0;
            break;

        // Заполнить массив
        case 'b':
            if ((filled = fillArray(arr, size)) == -1)
                return 0;

            break;

            // Представление массива
        case 'c':
            printArray(arr, size, filled);
            break;

            // Функция 3
        case 'd':
            if (checkArray(size, filled) == 0) {
                break;
            }

            if (inputRange(size, &k, &m) == -1) {
                return 0;
            }

            printf("Минимальное значение: %d\n",
                   minArr(arr, size, k, m));

            break;

            // Функция 18
        case 'e':
            if (checkArray(size, filled) == 0) {
                break;
            }

            if (inputRange(size, &k, &m) == -1) {
                return 0;
            }

            printf("Разница между мин. и макс. значением: %d\n",
                   rangeArr(arr, size, k, m));

            break;

        // Функция 23
        case 'f':
            if (checkArray(size, filled) == 0) {
                break;
            }

            if (inputK(&k) == -1) {
                return 0;
            }

            indexArr(arr, size, k);

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
