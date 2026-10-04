#include <stdio.h>
#include <stdint.h>


int main(void){
 printf("INT8: size=%zu, min=%d, max=%d, values=%lld\n"
        "UINT8: size=%zu, min=%d, max=%d, values=%llu\n"
        "INT16: size=%zu, min=%d, max=%d, values=%lld\n"
        "UINT16: size=%zu, min=%d, max=%d, values=%llu\n"
        "INT32: size=%zu, min=%d, max=%d, values=%lld\n"
        "UINT32: size=%zu, min=%d, max=%lld, values=%llu\n",

        sizeof(int8_t), INT8_MIN, INT8_MAX, (long long)INT8_MAX-(long long)INT8_MIN+1LL,
        sizeof(uint8_t), 0, UINT8_MAX, (unsigned long long)UINT8_MAX+1LL,
         
        sizeof(int16_t), INT16_MIN, INT16_MAX, (long long)INT16_MAX-(long long)INT16_MIN+1LL,
        sizeof(uint16_t), 0, UINT16_MAX, (unsigned long long)UINT16_MAX+1LL,

        sizeof(int32_t), INT32_MIN, INT32_MAX, (long long)INT32_MAX-(long long)INT32_MIN+1LL,
        sizeof(uint32_t), 0, (long long)UINT32_MAX, (unsigned long long)UINT32_MAX+1LL);
  
        return 0;
}

/*Объяснение:
 * Потому что они занимают одинаковое кол-во байтов, следовательно у них
 * 1 максимум значений. У беззнаковых нет отрицательных чисел, соотвественно у них больше
 * в полож значениях.*/

