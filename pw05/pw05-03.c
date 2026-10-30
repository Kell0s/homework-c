#include "../variant.h"
#include <math.h>
#include <stdio.h>

double factorial(int n);

int main(void) {
    printf("Номер задания: %d\n\n", V3);
    int n;
    while (scanf("%d", &n) == 1 && n > 0) {
        double sum = 0;

        for (int i = 0; i <= n; i++) {
            sum += pow((-1), i) / factorial(i);
        }

        printf("%.6f\n", sum);
    }
    return 0;
}

double factorial(int n) {
    double result = 1.0;

    for (int k = 1; k <= n; k++) {
        result *= k;
    }

    return result;
}
