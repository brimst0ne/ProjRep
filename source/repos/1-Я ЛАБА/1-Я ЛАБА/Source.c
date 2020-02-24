#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h> 

int main(int argc, char* argv[])
{
	int d[3];
	int n = 0; // Кол-во чисел 
	int i = 0; // Для for 
	int x = 0; // Для задания массива 
	double* mass; // Указатель на массив 
	double* fract; // Указатель на массив дробных частей чисел 
	short int* keys; // Указатель на массив неких "ключей". Нужна для подсчета result 
	double a = 0.0; // Для работы с fract 
	long double result = 0.0;

	double max = 0, min = 0;

	srand(time(NULL));

	if (argc < 4) //Работа с параметрами main 
	{
		printf("Warning\n");
		return 1;
	}
	n = atoi(argv[1]);
	min = atof(argv[2]);
	max = atof(argv[3]);

	//Выделяем память под массивы 
	mass = (double*)malloc(n * sizeof(double));
	fract = (double*)malloc(n * sizeof(double));
	keys = (short int*)malloc(n * sizeof(short int));

	for (i = 0; i < n; i++)
	{
		keys[i] = 0;
		x = rand();
		mass[i] = (((double)x) / RAND_MAX) * (max - min) + min;

		//Заполняем массив fract дробными частями, соответствующие числам из mass 
		fract[i] = (mass[i] - (int)mass[i]);
		fract[i] = (fract[i] * 1000000); // Задаем количество цифр после запятой c помощью умножения на 10^6 
		a = fract[i] - (int)fract[i];
		a *= 10;
		if (a >= 5.0) //Эта ветвь необходима из-за особенности дробных чисел в языке C 
			fract[i]++;
		fract[i] = (int)fract[i];

		printf("№%d: %lf - %lf\n", i, mass[i], fract[i]);
	}

	for (i = 0; i < n; i++) //Еще один цикл нужен, т.к. не заданы все элементы mass[] 
	{
		result += mass[i];
		if (((int)fract[i] < n) && (keys[(int)fract[i]] == 0))
		{
			result -= 2 * mass[(int)fract[i]];
			keys[(int)fract[i]] = 1; //Помечаем, что она была использована. 
		}

	}
	printf("Result: %lf", result);
	//Очищаем память 
	free(keys);
	free(mass);
	free(fract);

	return 0;
}