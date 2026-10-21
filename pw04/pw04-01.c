#include <stdio.h>

#define PA_IN_KPA 1000

int main(void) {
    int Pa;

    int n = (111260148 % 30) + 1;
    printf("Номер задания: %d\n", n);

    while (scanf("%i", &Pa) == 1 && Pa > 0) {
        printf("%i кПа и %i Па\n", Pa / PA_IN_KPA, Pa % PA_IN_KPA);
    }

    return 0;
}
