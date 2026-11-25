#ifndef MATRIXFUNC_H
#define MATRIXFUNC_H

#include <stddef.h>

int setSize(int *rows, int *cols);
int fillMatrix(int *mat, int rows, int cols);
void printMatrix(int *mat, int rows, int cols, int filled);

int checkMatrix(int rows, int cols, int filled);
int inputRange(int rows, int *k, int *m, int checkIndex);
int minMatrix(int *mat, size_t rows, size_t cols);
int countMatrix(int *mat, size_t rows, size_t cols, int k, int m);
int sumMatrix(int *mat, size_t rows, size_t cols, int k, int m);

int exitMenu(void);

#endif
