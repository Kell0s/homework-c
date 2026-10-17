#include <stdio.h>

int main(void) {
    int i = 1;
    int N;
    long long int a = 1;

    scanf("%d", &N);

    while (i <= N) {
        printf("%lld ", a);
        a = a * 1000;
        i++;

        printf("\n");
    }

    return 0;
}
