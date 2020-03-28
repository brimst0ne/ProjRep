#pragma once
#ifndef _Plane_h_
#define _Plane_h_
#include "Air.h"

class Plane :public Air {
public:
	Plane();
	virtual const char* Voice();
	double performancetime();
};
#endif
