#include "../variant.h"
#include <math.h>
#include <stdio.h>

int main(void) {
    printf("Номер задания: %d\n", V1);
    printf("№ |   X    |   Y\n");

    double b = 3.0;
    int n = 1;
    double e = 2.718;

    for (double a = 0; a <= b; a += 0.5) {
        printf("%d | %.4f | %.4f\n", n, a, pow(e, a));
        n++;
    }
    return 0;
}
