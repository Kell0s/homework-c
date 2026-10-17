#include <stdio.h>

double k_to_c(double k);

int main(void) {
    double k;

    while (scanf("%lf", &k) == 1) {
        printf("%.2lf\n", (double)k_to_c(k));
    }

    return 0;
}

double k_to_c(double k) {
    const double C_TO_F = k - 273.15;

    return (C_TO_F);
}
