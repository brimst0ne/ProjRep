#include "Helicopter.h"
#include <stdlib.h>

Helicopter::Helicopter()
{
	passengers = 20;
	weight = 1000;
	range = 200000;
}

const char* Helicopter::Voice()
{
	return "*GET TO THE CHOPPA!*";
}

double Helicopter::performancetime()
{
	return rand() % 10 + 12;
}
