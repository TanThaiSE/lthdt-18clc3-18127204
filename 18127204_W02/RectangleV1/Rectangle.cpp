#include"Rectangle.h"
Rectangle::Rectangle()
{
	Point a(0, 0), b(4, 3);
	_topLeft = a;
	_bottomRight = b;
}
Rectangle::Rectangle(Point x, Point y)
{
	_topLeft = x;
	_bottomRight = y;
}
Rectangle::~Rectangle()
{

}