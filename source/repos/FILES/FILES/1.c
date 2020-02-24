#include "1.h"
#include <stdio.h>

void CreateArr(int size, char** m)
{
    if (size > 0)
		*m = (char*)malloc(size * sizeof(char));
}
void Gen(int size, char* m, int maxa, int mina)
{
	int i = 0;
	for (i = 0; i < size; i++)
		m[i] = rand() % (maxa - mina) + mina;

}
void Print(FILE* f, int size, char* m)
{
	int i = 0;
	for (i = 0; i < size; i++)
		fprintf(f, "m[%d] = %d\n", i, m[i]);

}



	
	

