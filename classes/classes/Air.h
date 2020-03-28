#pragma once
#ifndef _Air_h_
#define _Air_h_

#include "Transport.h"
class Air : public Transport {
protected:
	int height;
	bool vertical;
	int speed;
public:
	Air();

	int Getheight();
	bool Getvertical();
	int Getspeed();

	void Setheight(int h);
	void Setvertical(bool v);
	void Setspeed(int s);

	virtual const char* Voice();
};
#endif
