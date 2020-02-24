#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	int size = 0;
	int i, j, imin, imax, jmin, jmax;
	double* arr;
	double r, max, min, s, summin, summax;
	printf("Please enter size of the array\n");
	scanf("%d", &size);
	arr = (double*)malloc(size * sizeof(double));
	for (i = 0; i < size; i++)
	{
		printf("Please enter the array element\n");
		scanf("%lf", &arr[i]);
	}
	for (i = 0; i < size; i++)
		printf("arr[%d] = %lf\n", i, arr[i]);
	printf("Please enter R\n");
	scanf("%lf", &r);
	min = 1e38;
	max = -1e38;
	for (i = 0; i < (size - 1); i++)
		for (j = (i + 1); j < size; j++)
		{
			s = arr[i] + arr[j];
			if (fabs(s - r) < min)
			{
				min = fabs(s - r);
				imin = i;
				jmin = j;
			}
			if (fabs(s - r) > max)
			{
				max = fabs(s - r);
				imax = i;
				jmax = j;
			}
		}
	summin = arr[imin] + arr[jmin];
	summax = arr[imax] + arr[jmax];
	printf("The most close to R: arr[%d] and arr[%d], sum = %lf\n", imin, jmin);
	printf("The least close to R: arr[%d] and arr[%d], sum = %lf\n", imax, jmax);
	getch();
}