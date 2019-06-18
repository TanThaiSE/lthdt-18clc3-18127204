#pragma once
#include<iostream>
#include<math.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
class Point {
public:
	static int InstanceCount;
private:
	float _x;
	float _y;
public:

	float X() { return _x; }
	float Y() { return _y; }
	void SetX(float value) { _x = value; }
	void SetY(float value) { _y = value; }
	float calcDistanceto(const Point* other);
	string Tostring();
	float calcDistance(const Point* a, const Point* b);
	Point* Parse(string s);
public:
	Point();
	Point(float, float);
	~Point();
	Point(const Point&);
};