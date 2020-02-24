#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <time.h>

char* MakeArr(FILE* f, int size)
{
	char* arr1 = (char*)malloc(sizeof(char) * size);
	for (int i = 0; i < size; i++) {
		fscanf(f, "%c", &arr1[i]);
	}
	return arr1;
}
void PrintArray(char* Arr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%c ", Arr[i]);
	}
	printf("...\n");
}

int command()
{
	int i = 0;
	scanf("%d", &i);
	return i;
}

void menu()
{
	setlocale(LC_ALL, "Rus");
	printf("Пожалуйста, выберите одно из предложенных действий:\n1 - Вывести массив на экран\n");
	printf("2 - BubbleSort\n3 - InsertionSort\n4 - QuickSort\n");
	printf("5 - Сбросить результаты сортировки\n6 - Выход\n");

}
clock_t BubbleSort(char* Arr, int size)
{
	clock_t t1, t2;
	t1 = clock();
	char tmp = 0;
	int i, j = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				tmp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = tmp;
			}
		}
	}
	t2 = clock();
	return (t2 - t1);

}
clock_t InsertionSort(char* Arr, int size)
{
	clock_t t1, t2;
	t1 = clock();
	char newElement;
	int location;

	for (int i = 1; i < size; i++)
	{
		newElement = Arr[i];
		location = i - 1;
		while (location >= 0 && Arr[location] > newElement)
		{
			Arr[location + 1] = Arr[location];
			location = location - 1;
		}
		Arr[location + 1] = newElement;
	}
	t2 = clock();
	return t2 - t1;
}

clock_t QuickSort(char* Arr, int first, int last)
{
	clock_t t1, t2, t3;
	t1 = clock();
	int i = first, j = last;
	char tmp, x = Arr[(first + last) / 2];

	do {
		while (Arr[i] < x)
			i++;
		while (Arr[j] > x)
			j--;

		if (i <= j)
		{
			if (i < j)
			{
				tmp = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = tmp;
			}
			i++;
			j--;
		}
	} while (i <= j);

	if (i < last)
		t3 = QuickSort(Arr, i, last);
	if (first < j)
		t3 = QuickSort(Arr, first, j);
	t2 = clock();
	return (t2 - t1);
}
