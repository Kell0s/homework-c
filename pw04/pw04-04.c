#include <stdio.h>

int main(void) {
    int a;
    int b;
    int o;

    printf("Напишите 2 числа через пробел:\n");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        o = a % b;
        a = b;
        b = o;
    }

    printf("%d\n", a);

    return 0;
}
