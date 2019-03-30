#include <cstdarg>
#include "Point.h"
#include "Polyline.h"
using namespace std;

template <typename T> Polyline::Polyline (initializer_list<T> values){

    for(T point : values){
		tops.push_back(point);
    }
}

template <typename T> T Polyline::getFirst(initializer_list<T> values){
    return values.begin();
}

Polyline::Polyline (){
	BPoint.x = BPoint.y = 0;
	tops.push_back(BPoint);
}

Polyline::~Polyline (){
}

double Polyline::perimeter (){
	double res = 0;
	return res;
}

double Polyline::square (){  
	double res = 0;
	return res;
}
