#pragma once
#ifndef _Car_h_
#define _Car_h_
#include "Ground.h"

class Car :public Ground {
public:
	Car();
	virtual const char* Voice();
	double performancetime();
};
#endif