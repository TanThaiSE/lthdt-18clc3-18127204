#include"Triangle.h"
Triangle::Triangle()
{
	Point x(0, 0), y(0, 1), z(1, 0);
	_a = x;
	_b = y;
	_c = z;
}
Triangle::Triangle(Point x, Point y, Point z)
{
	_a = x;
	_b = y;
	_c = z;
}
Triangle::~Triangle()
{

}