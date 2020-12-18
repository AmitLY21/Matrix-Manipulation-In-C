#ifndef F_M_H
#define F_M_H

#include <stdlib.h>
#include <time.h>

#define COL 4
#define ROW 4
#define SHUFFLE_COUNT 10

int getRand(int min, int max);
void printMatrix(int *mat , int rows, int cols);

///////////////////////////////////////Q1/////////////////////////////////////////////////////////////////////////
void RotateClockwise(int *mat , int rows, int cols);
void RotateCounterClockwise(int *mat , int rows, int cols);
void flipHorizontally(int *mat , int rows, int cols);
void flipVertically(int *mat , int rows, int cols);

//////////////////////////////////////Q2//////////////////////////////////////////////////////////////////////////
void initMat(int* mat, int rows, int cols);
void shuffleMat(int* mat, int rows, int cols);
void gameHandler(int * mat, int rows, int choice);

#endif 
