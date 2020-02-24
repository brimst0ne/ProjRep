#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main(int argc, char* argv[])
{
	int n;
	int min, max;
	int i = 0;
	char* mas;
	FILE* f;

	n = atoi(argv[1]);
	min = atoi(argv[2]);
	max = atoi(argv[3]);

	if (argc < 4)
	{
		printf("Error\n");
		return 1;
	}

	CreateArr(n, &mas);
	Gen(n, mas, max, min);

	f = fopen("abcd.txt", "w");
	Print(f, n, mas);
	fclose(f);
	free(mas);
	
	getch();

}