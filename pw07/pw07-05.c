#include <stdio.h>

int is_prime_rec(int n, int d);
int is_prime_iter(int n);

int main(void) {
    int n;

    while (scanf("%d", &n) == 1) {
        int rec = (n >= 2) ? is_prime_rec(n, 2) : 0;
        int iter = is_prime_iter(n);

        printf("Рекурсивно:  %s\n", rec ? "простое" : "не простое");
        printf("Итеративно:  %s\n", iter ? "простое" : "не простое");
    }

    return 0;
}

int is_prime_rec(int n, int d) {
    if (d * d > n) {
        return 1;
    }
    if (n % d == 0) {
        return 0;
    }
    return is_prime_rec(n, d + 1);
}

int is_prime_iter(int n) {
    if (n < 2) {
        return 0;
    }

    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return 0;
        }
    }

    return 1;
}
// вариант 25
