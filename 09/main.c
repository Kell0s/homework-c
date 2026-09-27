#include <stdio.h>


void phase_1(void);
void phase_2(void);

int main(void) {
  printf("START ");
  phase_1();
  printf("END\n");

  return 0;
}


void phase_1(void) {
  printf("ALPHA ");
  phase_2();
  printf("GAMMA ");
}


void phase_2(void) {
  printf("BETA ");
}
