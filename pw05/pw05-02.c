#include "../variant.h"
#include <stdio.h>

#define HEIGHT 5

int main(void) {
    printf("Номер задания: %d\n\n", V2);

    for (int i = 1; i <= HEIGHT; i++) {
        int ch = 0;

        printf("%*s", HEIGHT - i, "");

        for (int j = 1; j <= i; j++) {
            ch += 2;
            printf("%d ", ch);
        }

        printf("\n");
    }

    return 0;
}
