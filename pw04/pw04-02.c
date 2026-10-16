#include <stdint.h>
#include <stdio.h>

int main(void) {
    uint16_t u;
    uint16_t i;

    scanf("%hu %hu", &u, &i);

    printf("ОТВЕТ: %f\n", (float)u / i);
    printf("FLOAT: %llu\n"
           "UINT16_T: %llu\n",
           (unsigned long long)sizeof(float),
           (unsigned long long)sizeof(uint16_t));

    return 0;
}
