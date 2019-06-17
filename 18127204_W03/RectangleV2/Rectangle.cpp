#include"Rectangle.h"
Rectangle::Rectangle()
{
	Point* a = new Point(1, 1);
	Point* b=new Point(10, 10);
	_topLeft = a;
	_bottomRight = b;
}
Rectangle::Rectangle(Point* x, Point* y)
{
	_topLeft = x;
	_bottomRight = y;
}
Rectangle::Rectangle(Point* x)
{
	Point* a = new Point(1, 1);
	_topLeft = a;
	_bottomRight = x;
}

Rectangle::Rectangle(const Rectangle& x)
{
	
	_topLeft = x._topLeft;
	_bottomRight = x._bottomRight;
	
}
float Rectangle::Chuvi()
{
	Point* c = new Point(this->_topLeft->X(),this->_bottomRight->Y());
	float cr = _topLeft->calcDistanceto(c);
	float cd = _bottomRight->calcDistanceto(c);
	return 2 * (cr + cd);
}
float Rectangle::Dientich()
{
	Point* c = new Point(this->_topLeft->X(), this->_bottomRight->Y());
	float cr = _topLeft->calcDistanceto(c);
	float cd = _bottomRight->calcDistanceto(c);
	return cr * cd;
}
Rectangle::~Rectangle()
{
	delete _topLeft;
	delete _bottomRight;
}