#pragma once
#include"Point.h"
class Triangle {
private:
	Point _a, _b, _c;
public:
	Point get_a() { return _a; }
	Point get_b() { return _b; }
	Point get_c() { return _c; }
	void set_a(Point x) { _a = x; }
	void set_b(Point y) { _b = y; }
	void set_c(Point z) { _c = z; }
public:
	Triangle();
	Triangle(Point, Point, Point);
	~Triangle();
};