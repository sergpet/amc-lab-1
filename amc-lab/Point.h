#pragma once
#include <iostream>
using namespace std;

class Point {
public:
	double x;
	double y;
	Point (double x, double y);
	Point ();
	~Point ();
	void operator &= (Point &point);
	friend ostream& operator << (ostream& flow, Point &point);
};
