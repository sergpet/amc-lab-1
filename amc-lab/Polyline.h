#pragma once
#include <vector>
#include "Primitive.h"
#include "Line.h"
using namespace std;

class Polyline : public Primitive {
private:
	vector<Point> tops;
public:
    template <typename T> Polyline (initializer_list<T> points);
    template<typename T> T getFirst(initializer_list<T> values);
	Polyline ();
	~Polyline ();
	double perimeter ();
	double square ();
};
