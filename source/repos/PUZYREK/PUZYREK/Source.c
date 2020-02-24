#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
void main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");

	int i, n, a, b, min, x, y;
	double* mas;
	double c;

	n = atoi(argv[1]);
	x = atoi(argv[2]);
	y = atoi(argv[3]);

	mas = (double*)malloc(n * sizeof(double));

	for (i = 0; i < n; i++)
	{
		c = rand();
		mas[i] = (((double)c) / RAND_MAX) * (y - x) + x;
		mas[i] = (int)mas[i];
	}

	for (i = 0; i < n; i++)
		printf("mas[%d] = %d\n", i, mas[i]);

	min = mas[0];

	for (i = 0; i < n; i++)
	{
		if (mas[i] < min)
			min = mas[i];
		
	}
	printf("Минимальный элемент массива - %d\n", min);
}