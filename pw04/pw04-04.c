#include <stdio.h>

int main(void) {
    int a;
    int b;
    int o;

    int K = 0;
    int n = ((111260151 + (K + 19)) % 30) + 1;
    printf("Номер задания: %d\n", n);

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
