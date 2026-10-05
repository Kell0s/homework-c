#include <stdio.h>
#include <stdint.h>


int main(void){
  int id;
  uint8_t code;
  int temp_code;
  float volt;

  scanf("%x %o %f",
        &id, &temp_code, &volt);
  code = temp_code;

  uint16_t checksum = id + code;
  
  printf("PACKET_ID: %d\nSTATUS_CODE: %d\nSTATUS_CHAR: %c\nVOLTAGE: %.2f\nCHECKSUM: %d\n",
         id, code, code, volt, checksum);

  return 0;
}

