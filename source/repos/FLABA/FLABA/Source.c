#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h> 

int main(int argc, char* argv[])
{
	int d[3];
	int n = 0; // ���-�� ����� 
	int i = 0; // ��� for 
	int x = 0; // ��� ������� ������� 
	double* mass; // ��������� �� ������ 
	double* fract; // ��������� �� ������ ������� ������ ����� 
	short int* keys; // ��������� �� ������ ����� "������". ����� ��� �������� result 
	double a = 0.0; // ��� ������ � fract 
	long double result = 0.0;

	double max = 0, min = 0;

	srand(time(NULL));

	if (argc < 4) //������ � ����������� main 
	{
		printf("Warning\n");
		return 1;
	}
	n = atoi(argv[1]);
	min = atof(argv[2]);
	max = atof(argv[3]);

	//�������� ������ ��� ������� 
	mass = (double*)malloc(n * sizeof(double));
	fract = (double*)malloc(n * sizeof(double));
	keys = (short int*)malloc(n * sizeof(short int));

	for (i = 0; i < n; i++)
	{
		keys[i] = 0;
		x = rand();
		mass[i] = (((double)x) / RAND_MAX) * (max - min) + min;

		//��������� ������ fract �������� �������, ��������������� ������ �� mass 
		fract[i] = (mass[i] - (int)mass[i]);
		fract[i] = (fract[i] * 1000000); // ������ ���������� ���� ����� ������� c ������� ��������� �� 10^6 
		a = fract[i] - (int)fract[i];
		a *= 10;
		if (a >= 5.0) //��� ����� ���������� ��-�� ����������� ������� ����� � ����� C 
			fract[i]++;
		fract[i] = (int)fract[i];

		printf("�%d: %lf - %lf\n", i, mass[i], fract[i]);
	}

	for (i = 0; i < n; i++) //��� ���� ���� �����, �.�. �� ������ ��� �������� mass[] 
	{
		result += mass[i];
		if (((int)fract[i] < n) && (keys[(int)fract[i]] == 0))
		{
			result -= 2 * mass[(int)fract[i]];
			keys[(int)fract[i]] = 1; //��������, ��� ��� ���� ������������. 
		}

	}
	printf("Result: %lf", result);
	//������� ������ 
	free(keys);
	free(mass);
	free(fract);

	return 0;
}