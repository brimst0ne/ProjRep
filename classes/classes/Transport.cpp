#include "Transport.h"

Transport::Transport()
{
	passengers = 0;
	weight = 0;
	range = 0;
}

int Transport::Getpassengers()
{
	return passengers;
}

int Transport::Getweight()
{
	return weight;
}

int Transport::Getrange()
{
	return range;
}

void Transport::Setpassengers(int p)
{
	passengers = p;
}

void Transport::Setweight(int w)
{
	weight = w;
}

void Transport::Setrange(int r)
{
	range = r;
}

const char* Transport::Voice()
{
	return "*Transport noises*";
}
