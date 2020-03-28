#include "Plane.h"
#include <stdlib.h>

Plane::Plane()
{
	passengers = 170;
	weight = 3000;
	range = 2000000;
}

const char* Plane::Voice()
{
	return "*140 decibel noises*";
}

double Plane::performancetime()
{
	return rand() % 10 + 15;
}
