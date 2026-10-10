#include <stdio.h>
#include <string.h>


int main(void){
  char name[20];

  scanf("%s", name);

  printf("\"%s\"\n"
         "\"%20s\"\n"
         "\"%-20s\"\n"
         "\"%*s\"\n",
         name, name, name,(int)strlen+5 , name);

  return 0;
}

