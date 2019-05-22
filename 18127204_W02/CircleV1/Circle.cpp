#include"Circle.h"
Circle::Circle()
{
	Point a(0,0);
	_center = a;
	_radius = 1;
}
Circle::Circle(Point x, float y)
{
	_center = x;
	_radius = y;
}
Circle::~Circle()
{

}