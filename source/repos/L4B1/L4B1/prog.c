#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void CreateArr(FILE* f, int size, char min, char max)
{
	srand(time(NULL));
	int i = 0;
	char a;
	for (i = 0; i < size; i++)
	{
		a = (rand() % max) + (min + 1);
		fprintf(f, "%c\n", a);
	}
}