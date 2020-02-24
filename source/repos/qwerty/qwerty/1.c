#include "1.h"
#include <stdio.h>
#include <stdlib.h>
void massiv(int size, int** mas)
{
	int i = 0;
	*mas = (int*)malloc(size * sizeof(int));
	for (i = 0; i < size; i++)
	{
		(*mas)[i] = rand();
		printf("mass[%d] = %d\n", i, (*mas)[i]);
	}
		
		
	return 0;
}