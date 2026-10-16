#include <stdio.h>

#define MIN_IN_GRAD 60

int main(void) {
    int min;

    while (scanf("%i", &min) == 1 && min > 0) {
        printf("%i градуcов и %i минут\n", min / MIN_IN_GRAD, min % MIN_IN_GRAD);
    }

    return 0;
}
