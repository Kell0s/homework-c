#ifndef MYARRFUNC_H
#define MYARRFUNC_H

#include <stddef.h>

int setSize(void);
int fillArray(int *arr, int size);
void printArray(int *arr, int size, int filled);

int checkArray(int size, int filled);
int inputRange(int size, int *k, int *m);
int inputK(int *k);
int minArr(int *arr, size_t n, int k, int m);
int rangeArr(int *arr, size_t n, int k, int m);
int indexArr(int *arr, size_t n, int k);

int exitMenu(void);

#endif
