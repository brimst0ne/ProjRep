#pragma once
#ifndef _Ground_h_
#define _Ground_h_

#include "Transport.h"

class Ground : public Transport {
protected:
	int wheels;
	int purpose;
	bool special;
public:
	Ground();

	int Getwheels();
	int Getpurpose();
	bool Getspecial();

	void Setwheels(int wh);
	void Setpurpose(int pur);
	void Setspecial(bool spec);

	virtual const char* Voice();
};
#endif
