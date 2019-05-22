#include"Line.h"
Line::Line()
{
	Point start1(0, 0), end1(3, 4);
	_start = start1;
	_end = end1;
}
Line::Line(Point x, Point y)
{
	_start = x;
	_end = y;
}
Line::~Line()
{

}