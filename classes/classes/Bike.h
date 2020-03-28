#pragma once
#ifndef _Bike_h_
#define _Bike_h_
#include "Ground.h"

class Bike :public Ground {
public:
	Bike();
	virtual const char* Voice();
	double performancetime();
};
#endif
