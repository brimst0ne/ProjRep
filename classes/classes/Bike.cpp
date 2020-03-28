#include "Bike.h"
#include <stdlib.h>

Bike::Bike()
{
	passengers = 1;
	weight = 100;
	range = 15000;
}

const char* Bike::Voice()
{
	return "*Bike noises*";
}

double Bike::performancetime()
{
	return rand() % 10 + 23;
}
