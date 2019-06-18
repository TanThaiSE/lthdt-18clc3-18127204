#pragma once
#include"Point.h"
class Rectangle {
private:
	Point* _topLeft;
	Point* _bottomRight;
public:
	Point* get_topLeft() { return _topLeft; }
	Point* get_bottomRight() { return _bottomRight; }
	void set_topLeft(Point* x) { _topLeft = x; }
	void set_bottomRight(Point* y) { _bottomRight = y; }
	float Chuvi();
	float Dientich();
public:
	Rectangle();
	Rectangle(Point*, Point*);
	Rectangle(Point*);
	Rectangle(const Rectangle& );
	~Rectangle();

};