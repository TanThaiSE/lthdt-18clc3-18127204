#pragma once
#include"Point.h"
class Circle
{
private:
	Point _center;
	float _radius;
public:
	Point get_center() { return _center; }
	float get_radius() { return _radius; }
	void set_center(Point x) { _center = x; }
	void set_radius(float x) { _radius =x; }
public:
	Circle();
	Circle(Point, float);
	~Circle();
};