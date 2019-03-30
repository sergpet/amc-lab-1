#include <cmath>
#include "Line.h"

Line::Line (double x1, double y1, double x2, double y2)
: EPoint(x2, y2) {
	BPoint.x = x1;
	BPoint.y = y1;
}

Line::Line (Point &first, Point &second)
: EPoint(second) {
	BPoint = first;
}

Line::Line () 
: EPoint(0, 0) {
	BPoint.x = BPoint.y = 0;
}

Line::~Line () {
}

Point Line::getBPoint (){
	return BPoint;
}

Point Line::getEPoint (){
	return EPoint;
}

void Line::setBPoint (Point &point){
	BPoint = point;
}

void Line::setEPoint (Point &point){
	EPoint = point;
}

double Line::perimeter (){
	return sqrt( pow(BPoint.x - EPoint.x, 2.0) + pow(BPoint.y - EPoint.y, 2.0) );
}

void Line::operator &= (Line &line){
	this->BPoint = line.BPoint;
	this->EPoint = line.EPoint;
}

ostream& operator << (ostream &flow, Line &line){
	flow << "(x ";
	line.getBPoint().x >= 0 ? flow << "- " << line.getBPoint().x : flow << "+ " << -line.getBPoint().x ;
	flow << ") / " << line.getEPoint().x - line.getBPoint().x << " = (y ";
	line.getBPoint().y >= 0 ? flow << "- " << line.getBPoint().y : flow << "+ " << -line.getBPoint().y ;
	flow << ") / " << line.getEPoint().y - line.getBPoint().y;
	return flow;
}