#include <stdio.h>
#include <math.h>
void main()
{
	//a*x*x + b*x + c
	float a, b, c, D, x1, x2;
	printf("Vvedite dannye\n");
	scanf_s("%f %f %f", &a, &b, &c);
	D = b * b - 4 * a * c;
	x1 = ((-1) * b + sqrt(D)) / (2 * a);
	x2 = ((-1) * b - sqrt(D)) / (2 * a);
	printf("x1 = %f\n", x1);
	printf("x2 = %f\n", x2);
	printf("Uravnenie resheno!");
}