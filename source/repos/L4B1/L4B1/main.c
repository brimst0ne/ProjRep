#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "1.h"
void main(int argc, char* argv[])
{

	if (argc < 4)
	{
		printf("Error");
		return 1;
	}


	FILE* f = fopen(argv[1], "w");

	if (f == NULL)
	{
		printf("Error");
		return 1;
	}
	int min = argv[3];
	int max = argv[4];
	int n = atoi(argv[2]);

	CreateArr(f, n, min, max);
	printf("File created!\n");

	fclose(f);

	return 1;
}