#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	int* mass;

	printf("������� �������� ������ �������\n");
	scanf_s("%d", &n);

	massiv(n, &mass);

	return 0;
}