#include "../variant.h"
#include <math.h>
#include <stdio.h>

double calc(double a, double b);

int main(void) {
    printf("Номер задания: %d\n\n", V5);

    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2) {
        printf("%.4f\n", calc(a, b));
    }
    return 0;
}

double calc(double a, double b) {
    return (sin(a) * cos(b) + cos(a) * sin(b));
}
