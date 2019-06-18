#include"Triangle.h"
Triangle::Triangle()
{
	Point* x = new Point(1, 1);
	Point* y = new Point(1, 2);
	Point* z = new Point(4, 2);
	_a = x;
	_b = y;
	_c = z;
}
Triangle::Triangle(Point* x, Point* y, Point* z)
{
	_a = x;
	_b = y;
	_c = z;
}
Triangle::Triangle(Point*z)
{
	Point* x = new Point(1, 1);
	Point* y = new Point(1, 2);
	_a = x;
	_b = y;
	_c = z;
}
Triangle::Triangle(const Triangle&x)
{
	_a = x._a;
	_b = x._b;
	_c = x._c;
}
float Triangle::Chuvi()
{
	float x = _a->calcDistanceto(_b);
	float y = _b->calcDistanceto(_c);
	float z = _c->calcDistanceto(_a);
	return x + y + z;
}
float Triangle::Dientich()
{
	float x = _a->calcDistanceto(_b);
	float y = _b->calcDistanceto(_c);
	float z = _c->calcDistanceto(_a);
	float p = (x+y+z)*1.0/2;
	return sqrt(p * (p - x) * (p - y) * (p - z));
}
Triangle::~Triangle()
{
	delete _a;
	delete _b;
	delete _c;
}