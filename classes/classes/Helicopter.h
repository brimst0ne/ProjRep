#pragma once
#ifndef _Helicopter_h_
#define _Helicopter_h_
#include "Air.h"

class Helicopter :public Air {
public:
	Helicopter();
	virtual const char* Voice();
	double performancetime();
};
#endif
