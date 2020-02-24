#include <stdio.h>
#include <math.h>
void main()
{
	int a = 1000;
	int b = -8;
	printf_s("powf : %.20f\n", pow (a, (1/3)) );
	printf_s("powf : %.20f\n", pow (b, (1/3)) );
	return 0;
 }