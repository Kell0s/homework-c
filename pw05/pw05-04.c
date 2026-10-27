#include "../variant.h"
#include <stdio.h>

int main(void) {
    printf("Номер задания: %d\n", V4);

    double s;

    double arr[8] = {1, 2};
    for (int i = 2; i < 8; i++) {
        s = (3 * (2 * i - 1) * arr[i - 1] - (i - 2) * arr[i - 2]) / (i + 1);
        arr[i] = s;
    }
    printf("%.2f", arr[7]);

    return 0;
}
