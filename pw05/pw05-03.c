#include "../variant.h"
#include <math.h>
#include <stdio.h>

double factorial(int n);

int main(void) {
    printf("Номер задания: %d\n\n", V3);
    int i;
    while (scanf("%d", &i) == 1 && i > 0) {
        double sum = 0;

        for (int j = 0; j <= i; j++) {
            sum += pow((-1), j) / factorial(j);
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
