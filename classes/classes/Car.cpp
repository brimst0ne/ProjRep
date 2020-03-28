#include "Car.h"
#include <stdlib.h>

Car::Car()
{
	passengers = 6;
	weight = 200;
	range = 200000;
}

const char* Car::Voice()
{
	return "*Car noises*";
}

double Car::performancetime()
{
	return rand() % 10 + 20;
}
