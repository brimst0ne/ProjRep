#ifndef _1_H_
#define _1_H_
#include <stdio.h>
#include <time.h>

float* MakeArr(FILE* f, int size);
void menu();
int command();
clock_t BubbleSort(char* Arr, int size);
clock_t InsertionSort(char* Arr, int size);
clock_t QuickSort(char* Arr, int left, int right);

void PrintArray(char* Arr, int size);
#endif
