#pragma once
#include <iostream>
#include "Primitive.h"
using namespace std;

class Line : public Primitive {
private:
	Point EPoint;
public:
	Line (double x1, double y1, double x2, double y2);
	Line (Point &first, Point &second);
	Line ();
	~Line ();
	Point getBPoint ();
	Point getEPoint ();
	void setBPoint (Point &point);
	void setEPoint (Point &point);
	double perimeter ();
	void operator &= (Line &line);
	friend ostream& operator << (ostream &flow, Line &line);
};
