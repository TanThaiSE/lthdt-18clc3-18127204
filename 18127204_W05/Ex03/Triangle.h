#pragma once
#include"Point.h"
#include"Tokenizer.h"
class Triangle:public Point  {
private:
	Point* _a;
	Point* _b;
	Point* _c;
public:
	Point* get_a() { return _a; }
	Point* get_b() { return _b; }
	Point* get_c() { return _c; }
	void set_a(Point* x) { _a = x; }
	void set_b(Point* y) { _b = y; }
	void set_c(Point* z) { _c = z; }
	float Chuvi();
	float Dientich();
	string Tostring();
	Triangle* Parse(string);
	void parse();
public:
	Triangle();
	Triangle(Point*, Point*, Point*);
	Triangle(Point*);
	Triangle(const Triangle&);
	~Triangle();
};