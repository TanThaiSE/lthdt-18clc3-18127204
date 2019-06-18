#pragma once
#include"Point.h"
class Line {
private:
	Point _start;
	Point _end;
public:
	void Set_start(Point Start) { _start = Start; }
	void Set_end(Point End) { _end = End; }
	Point _START() { return _start; }
	Point _END()	{return _end; }
public:
	Line();
	Line(Point, Point);
	~Line();
};