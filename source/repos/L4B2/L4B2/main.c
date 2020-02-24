#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "1.h"
void main(int argc, char* argv[])
{

	if (argc < 3)
	{
		printf("Error");
		return 1;
	}

	FILE* f = fopen(argv[1], "r+");

	if (f == NULL)
	{
		printf("Error");
	}
	else
	{
		int n = atoi(argv[2]);
		clock_t t3;
		int t = 0;
		char* arr1 = (char*)malloc(sizeof(char) * n);
		char* arr2 = (char*)malloc(sizeof(char) * n);

		arr1 = MakeArr(f, n);
		for (int i = 0; i < n; i++)
		{
			arr2[i] = arr1[i];
		}

		menu();


		do {

			t = command();

			
			if (t == 1)
			{
				printf("Исходный массив:\n");
				PrintArray(arr1, 20);
			}
			
			if (t == 2)
			{
				t3 = BubbleSort(arr1, n);
				printf("Отсортированный массив:\n");
				PrintArray(arr1, 20);
				printf("Время работы сортировки BubbleSort: %lf\n", (double)t3 / CLK_TCK);
			}
			
			if (t == 3)
			{
				t3 = InsertionSort(arr1, n);
				printf("Отсортированный массив:\n");
				PrintArray(arr1, 20);
				printf("Время работы cортировки InsertionSort: %lf\n", (double)t3 / CLK_TCK);
			}
			
			if (t == 4)
			{
				t3 = QuickSort(arr1, 0, n - 1);
				printf("Отсортированный массив:\n");
				PrintArray(arr1, 20);
				printf("Время работы сортировки QuickSort: %lf\n", (double)t3 / CLK_TCK);
			}
			
			if (t == 5)
			{
				int i = 0;
				for (i = 0; i < n; i++)
				{
					arr1[i] = arr2[i];
				}
				printf("Исходный массив:\n");
				PrintArray(arr1, 20);
			}
		} while (t != 6);
	}
	return 0;

}