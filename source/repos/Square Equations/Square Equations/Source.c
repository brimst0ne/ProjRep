#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	float x1, x2, D;
	//a*x*x + b*x + c = 0
	printf("Введите значения для a, b и c\n");
	scanf("%d %d %d", &a, &b, &c);
	D = b * b - 4 * a * c;
	if (D >= 0)
		x1 = (((-1) * b) + sqrt(D))/(2 * a);
	else
		printf("Нет решений");
	if (D >= 0)
		x2 = (((-1) * b) - sqrt(D)) / (2 * a);
	else
		printf("Нет решений");
	printf("%f %f", x1, x2);
	return 0;
}