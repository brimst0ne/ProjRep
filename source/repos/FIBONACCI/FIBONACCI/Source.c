#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	int i = 1;
	int* chisla;

	printf("¬ведите кол-во первых чисел\n");
	scanf_s("%d", &n);

	chisla = (int*)malloc(n * sizeof(int));

	chisla[1] = 1;
	chisla[2] = 1;

	printf("1-е число: %d\n", chisla[1]);
	printf("2-е число: %d\n", chisla[2]);

	for(i = 3; i < n + 1; i++)
	{
		chisla[i] = chisla[i - 1] + chisla[i - 2];
		printf("%d-е число = %d\n", i, chisla[i]);
	}
	return 0;
}