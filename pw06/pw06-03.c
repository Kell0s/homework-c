#include <stdio.h>

int main(void) {
    int i;
    int f_cnt = 0;
    int f_sum = 0;
    int s_cnt = 0;
    int s_sum = 0;

    while (scanf("%d", &i) == 1 && i != 0) {
        if (i > 10) {

            if (i / 10 % 10 < i % 10) {
                f_cnt++;
                f_sum += i;
            } else if (i / 10 % 10 > i % 10) {
                s_cnt++;
                s_sum += i;
            }
        }
    }

    printf("1 ГРУППА:\nвстречалось %d раз\nСр. арифм.: %.3lf\n",
           f_cnt, (double)f_sum / f_cnt);
    printf("2 ГРУППА:\nвстречалось %d раз\nСр. арифм.: %.3lf\n",
           s_cnt, (double)s_sum / s_cnt);
    return 0;
}

// ВАРИАНТ 15
