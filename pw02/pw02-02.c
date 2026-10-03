#include <stdio.h>
#include <stdbool.h>


int main(void) {
  bool module_ready;
  bool fault_state;
  int temp_module_ready;
  int temp_fault_state;

  scanf("%d %d", &temp_module_ready, &temp_fault_state);
  module_ready = temp_module_ready;
  fault_state = temp_fault_state;

  printf("MODULE_READY: %d\nFAULT_STATE: %d\nBOOL_SIZE: %zu\nFLAGS_SUM: %d\n",
         module_ready,
         fault_state,
         sizeof(bool),
         module_ready+fault_state);

  return 0;
}

/*Объяснение: bool может хранить только 0(false) и 1(true)
 *bool сравнивает число с нулем, если true -> выводит 0,
 *иначе выводит 1. Сделано это для того, чтобы при вводе числа>255 не выводило 0,
 т.к. число не влезет в байт*/
