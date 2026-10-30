#include "../variant.h"
#include <stdio.h>

double calc(double a, double b);
double my_cos(double a);
double my_sin(double a);
double my_pow(double a, int b);
double fact(int a);

int main(void) {
    printf("Номер задания: %d\n\n", V5);
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2) {
        printf("%.4f\n", calc(a, b));
    }
    return 0;
}

double calc(double a, double b) {
    return (my_sin(a) * my_cos(b) + my_cos(a) * my_sin(b));
}

double my_sin(double a) {
    double sum = 0.0;
    int sign = 1;

    for (int i = 1; i < 20; i += 2) {
        sum += sign * (my_pow(a, i) / fact(i));
        sign = -sign;
    }

    return sum;
}

double my_cos(double a) {
    double sum = 0.0;
    int sign = 1;
    for (int i = 0; i < 20; i += 2) {
        sum += sign * (my_pow(a, i) / fact(i));
        sign = -sign;
    }

    return sum;
}

double my_pow(double a, int b) {
    double res = 1.0;

    for (int i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

double fact(int a) {
    double res = 1.0;

    for (int i = a; i > 0; i--) {
        res *= i;
    }
    return res;
}
