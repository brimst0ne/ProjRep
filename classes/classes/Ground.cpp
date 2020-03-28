#include "Ground.h"

Ground::Ground()
{
	wheels = 0;
	purpose = 0;
	special = false;
}

int Ground::Getwheels()
{
	return wheels;
}

int Ground::Getpurpose()
{
	return purpose;
}

bool Ground::Getspecial()
{
	return special;
}

void Ground::Setwheels(int wh)
{
	wheels = wh;
}

void Ground::Setpurpose(int pur)
{
	purpose = pur;
}

void Ground::Setspecial(bool spec)
{
	special = spec;
}

const char* Ground::Voice()
{
	return "*Ground transport noises*";
}
