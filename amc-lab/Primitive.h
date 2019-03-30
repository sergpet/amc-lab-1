#pragma once
#include "Point.h"

class Primitive {
protected:
	Point BPoint;
public:
	Primitive ();
	~Primitive ();
	double perimeter ();
	double square ();
};
