#include <stdio.h>

int main(void) {
    int i;

    while (scanf("%d", &i) == 1) {
        if (i < 0) {
            printf("Вы указали меньше 0\n");
        } else if (i < 10) {
            printf("Объём: %d\nЦена за ГБ: %d\nСтоимость: %d\n", i, 1, i * 1);
        } else if (i >= 60) {
            printf("Объём: %d\nЦена за ГБ: %.1f\nСтоимость: %.1lf\n", i, 0.5, i * 0.5);
        } else {
            printf("Объём: %d\nЦена за ГБ: %.1f\nСтоимость: %.1lf\n", i, 0.8, i * 0.8);
        }
    }

    return 0;
}

// ВАРИАНТ 21
