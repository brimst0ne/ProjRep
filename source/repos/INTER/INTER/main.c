#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void main(int argc, char* argv[])
{
	char* mas;
	FILE* f;
	int c = 0;
	int n, i = 0;

	n = atoi(argv[1]);

	f = fopen("C:\Users\TEMYCH\source\repos\FILES\Debug\abcd.txt", "r");
	READ(f, n);
	
	printf("Please select to continue\n");
	printf("1. Print");
	printf("2. Sort");
	printf("3. Recall");
	printf("4. Exit");

	scanf("%d", &c);
    
artem: printf("Please enter the correct number\n");
	switch (c)
	{
		case 1:
		{
			Printm(n, &mas);
			break;
		}
		case 2:
		{
			
			break;
		}
		case 3:
		{
			
			break;
		}
		case 4:
		{
			
			break;
		}
		default:
			goto artem;
	}
	getch();
}