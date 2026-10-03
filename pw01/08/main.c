#include <stdio.h>


void pulse(void);

int main(void) {
  pulse();
  printf("\n");
  pulse();pulse();
  printf("\n");
  pulse();pulse();pulse();
  printf("\n");

  return 0;
}

void pulse(void){
  printf("@");
}
