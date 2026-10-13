#include <stdio.h>
#include <string.h>

#define LINUXD "LinuxDistro"

int main(void) {
  const char RDATE[] = "2026";

  printf("DISTRO: %s\nRDATE: %s\nSTRLEN: %zu\nSIZEOF: %zu", LINUXD, RDATE,
         strlen(LINUXD), sizeof(LINUXD));

  return 0;
}
