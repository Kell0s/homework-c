#include <stdio.h>


int main(void) {
  int unit_id;
  int unit_version;
  int unit_status;

  scanf("%d %x %o", &unit_id, &unit_version, &unit_status);

  printf("unit_id: %d\nUNIT_VERSION: %d\nUNIT_STATUS: %d\nSUM: %d\n",
         unit_id,
         unit_version,
         unit_status,
         unit_id+unit_status+unit_version);

  return 0;
}
