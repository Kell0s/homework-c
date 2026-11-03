#include <ctype.h>
#include <stdio.h>
#include <uchar.h>

int main(void) {
    char16_t i = 0;
    int cnt = 0;

    while (i != '#') {
        i = (char16_t)getchar();

        if (isxdigit(i)) {
            cnt++;
        }
    }

    printf("16-ичных циф: %d", cnt);
    return 0;
}

// 19 ВАРИАНТ
