#include"Point.h"
#include"Tokenizer.h"
#include"Line.h"
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
Point::Point(const Point& p)
{
	_x = p._x;
	_y = p._y;
}
float Point::calcDistanceto(const Point* other)
{
	float dx = this->_x - other->_x;
	float dy = this->_y - other->_y;
	return sqrt(dx * dx + dy * dy);
}
string Point::Tostring()
{
	stringstream write;
	write << "(" << _x << "," <<  _y << ")";
	return write.str();
}

float Point::calcDistance(const Point* a, const Point* b)
{
	float dx = a->_x - b->_x;
	float dy = a->_y - b->_y;
	return sqrt(dx * dx + dy * dy);
}

Point* Point::Parse(string s)
{
	vector<string> p = Tokenizer::Parse(s, ",");
	p[0] = p[0].substr(1,p[0].length()-1);
	int x = stoi(p[0]);
	p[1] = p[1].substr(1, p[1].length() - 1);
	int y = stoi(p[1]);
	Point* ans = new Point(x, y);
	return ans;
	
}
