#include"Point.h"
Point::Point()
{
	this->_x = 0;
	this->_y = 0;
}
Point::Point(float x, float y)
{
	this->_x = x;
	this->_y = y;
}
Point::~Point()
{

}
float Point::calcDistanceto(const Point* other)
{
	float dx = this->_x - other->_x;
	float dy = this->_y - other->_y;
	return sqrt(dx * dx + dy * dy);
}