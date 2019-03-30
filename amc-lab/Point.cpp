#include <iostream>
#include "Point.h"
using namespace std;

Point::Point (double x, double y)
: x(x), y(y) {
}

Point::Point ()
: x(0), y(0) {
}

Point::~Point (){
}

void Point::operator &= (Point &point){
	this->x = point.x;
	this->y = point.y;
}

ostream& operator << (ostream &flow, Point &point){
	flow << '(' << point.x << ',' << point.y << ')';
	return flow;
}