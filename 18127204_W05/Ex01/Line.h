#pragma once
#include"Point.h"
#include"Tokenizer.h"
class Line:public Point {
private:
	Point _start;
	Point _end;
public:
	void Set_start(Point Start) { _start = Start; }
	void Set_end(Point End) { _end = End; }
	Point _START() { return _start; }
	Point _END()	{return _end; }
	string Tostring();
	Line* Parse(string s);
	void dosomething();
public:
	Line();
	Line(Point, Point);
	~Line();
};