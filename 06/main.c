#include <stdio.h>


#define days_in_year 365
#define hours_in_day 24
#define seconds_in_hour 3600


int main(void) {

  int age = 18;
  int days = age * days_in_year;
  int hours = days * hours_in_day;
  int seconds = hours * seconds_in_hour;

  printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n", seconds, hours, days, age);

  return 0;
}
