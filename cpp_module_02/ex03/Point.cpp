#include "Point.hpp"

Point::Point():_x(0),_y(0){}
Point::Point(const float f1, const float f2):_x(f1),_y(f2){}
Point::Point(const Point& point):_x(point._x),_y(point._y){}

Point::~Point(){}

Fixed	Point::getCrossProduct(const Point& a, const Point& b, const Point& c){
	Fixed x1=a._x, y1=a._y;
	Fixed x2=b._x, y2=b._y;
	Fixed x3=c._x, y3=c._y;
	return ((x2-x1)*(y3-y1) - (y2-y1)*(x3-x1));
}

Point&	Point::operator=(const Point& rhs){
	this->~Point();
	new(this) Point(rhs);
	return *this;
}
bool	Point::operator==(const Point& rhs) const{
	if (_x == rhs._x && _y == rhs._y)
		return true;
	return false;
}