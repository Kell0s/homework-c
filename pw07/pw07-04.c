#include <stdio.h>

void swap(int *x, int *y);
void sort3(int *a, int *b, int *c);

int main(void) {
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Ошибка ввода\n");
        return 0;
    }

    printf("До: a = %d, b = %d, c = %d\n", a, b, c);

    sort3(&a, &b, &c);
    printf("После: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void sort3(int *a, int *b, int *c) {
    if (*a > *b) {
        swap(a, b);
    }
    if (*b > *c) {
        swap(b, c);
    }
    if (*a > *b) {
        swap(a, b);
    }
}
// вариант 21
