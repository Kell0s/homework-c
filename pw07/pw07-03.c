#include <stdio.h>

double cube_of_sum(double a, double b);

int main(void) {
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2) {
        printf("%.4f\n", cube_of_sum(a, b));
    }

    return 0;
}

double cube_of_sum(double a, double b) {
    double s = a + b;

    return s * s * s;
}
// ВАРИАНТ 15
