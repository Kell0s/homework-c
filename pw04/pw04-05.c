#include <stdio.h>

double kg_to_lb(double k);

int main(void) {
    double k;

    int K = 0;
    int n = ((111260148 + (K + 23)) % 30) + 1;
    printf("Номер задания: %d\n", n);

    while (scanf("%lf", &k) == 1) {
        printf("%.2lf\n", (double)kg_to_lb(k));
    }

    return 0;
}

double kg_to_lb(double kg) {
    const double KG_TO_LB = 2.205;

    return (kg * KG_TO_LB);
}
