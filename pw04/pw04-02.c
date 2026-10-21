#include <stdint.h>
#include <stdio.h>

int main(void) {
    uint16_t a;
    uint16_t b;
    uint16_t h;

    int K = 0;
    int n = ((111260148 + (K + 7)) % 30) + 1;
    printf("Номер задания: %d\n", n);

    scanf("%hu %hu %hu", &a, &b, &h);

    printf("ОТВЕТ: %f\n", (float)(a + b) * h / 2);
    printf("FLOAT: %llu\n"
           "UINT16_T: %llu\n",
           (unsigned long long)sizeof(float),
           (unsigned long long)sizeof(uint16_t));

    return 0;
}
