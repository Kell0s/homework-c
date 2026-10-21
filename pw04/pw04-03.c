#include <stdio.h>

int main(void) {
    int i = 1;
    int N;
    long long int a = 1;

    int K = 0;
    int n = ((111260148 + (K + 13)) % 30) + 1;
    printf("Номер задания: %d\n", n);

    scanf("%d", &N);

    while (i <= N) {
        a = i * (i + 1) / 2;
        i++;
        printf("%lld\n", a);
    }

    return 0;
}
