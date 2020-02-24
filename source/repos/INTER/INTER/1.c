#define _CRT_SECURE_NO_WARNINGS
#include "1.h"
#include <stdio.h>

void READ(FILE* f, int size)
{
	char* m = (char*)malloc(sizeof(char) * size);
	for (int i = 0; i < size; i++) 
	{
		fscanf(f, "%d", &m[i]);
	}
	return m;
}

void Printm(int size, char* m)
{
	int i = 0;
	for (i = 0; i < size; i++)
		printf("m[%d] = %d\n", i, (&m[i]));
}