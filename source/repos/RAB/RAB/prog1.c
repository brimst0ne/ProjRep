#include "prog1.h"
#include <stdlib.h>
void CreateArr(int size, int** m)
{
	if (size > 0)
		*m = (int*)malloc(size * sizeof(int));

}
void Gen(int size, int* m, int maxa, int mina)
{
	int i = 0;
	for (i = 0; i < size; i++)
		m[i] = rand() % (maxa - mina) + mina;

}
void Print(FILE* f, int size, int* m)
{
	int i = 0;
	for (i = 0; i < size; i++)
		fprintf(f, "m[%d] = %d\n",i, m[i]);

}