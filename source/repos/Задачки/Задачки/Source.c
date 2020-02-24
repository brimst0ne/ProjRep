#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");

	double x, a, b, f;
	printf("Пожалуйста, введите a\n");
	scanf_s("%lf", &a);
	
	printf("Пожалуйста, введите b\n");
	scanf_s("%lf", &b);
	
	printf("Пожалуйста, введите f\n");
	scanf_s("%lf", &f);

	
	x = (a + b - f / a) + f * a * a - (a + b);
	printf("Результат этого выражения равен %lf\n", x);

	return 0;
}