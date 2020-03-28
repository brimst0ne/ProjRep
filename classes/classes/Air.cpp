#include "Air.h"

Air::Air()
{
	height = 0;
	vertical = false;
	speed = 0;
}

int Air::Getheight()
{
	return height;
}

bool Air::Getvertical()
{
	return vertical;
}

int Air::Getspeed()
{
	return speed;
}



void Air::Setheight(int h)
{
	height = h;
}

void Air::Setvertical(bool v)
{
	vertical = v;
}

void Air::Setspeed(int s)
{
	speed = s;
}

const char* Air::Voice()
{
	return "*Air transport noises*";
}
