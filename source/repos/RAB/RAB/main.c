#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int n = 0;
	int maxa = 0;
	int mina = 0;
	int i = 0;
	int* arr;
	FILE* f;
	if (argc < 5)
	{
		printf("Error\n");
		return 1;
	}
	n = atoi(argv[1]);
	maxa = atoi(argv[2]);
	mina = atoi(argv[3]);
	CreateArr(n, &arr);
	Gen(n, arr, maxa, mina);
	f = fopen_s(argv[4], "w");
	Print(f, n, arr);
	fclose(f);
	free(arr);
}