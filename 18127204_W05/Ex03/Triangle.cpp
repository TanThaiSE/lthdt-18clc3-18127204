#include"Triangle.h"
Triangle::Triangle()
{
	Point* x = new Point(1, 1);
	Point* y = new Point(1, 2);
	Point* z = new Point(4, 2);
	_a = x;
	_b = y;
	_c = z;
}
Triangle::Triangle(Point* x, Point* y, Point* z)
{
	_a = x;
	_b = y;
	_c = z;
}
Triangle::Triangle(Point*z)
{
	Point* x = new Point(1, 1);
	Point* y = new Point(1, 2);
	_a = x;
	_b = y;
	_c = z;
}
Triangle::Triangle(const Triangle&x)
{
	_a = x._a;
	_b = x._b;
	_c = x._c;
}
float Triangle::Chuvi()
{
	float x = _a->calcDistanceto(_b);
	float y = _b->calcDistanceto(_c);
	float z = _c->calcDistanceto(_a);
	return x + y + z;
}
float Triangle::Dientich()
{
	float x = _a->calcDistanceto(_b);
	float y = _b->calcDistanceto(_c);
	float z = _c->calcDistanceto(_a);
	float p = (x+y+z)*1.0/2;
	return sqrt(p * (p - x) * (p - y) * (p - z));
}
Triangle::~Triangle()
{
	delete _a;
	delete _b;
	delete _c;
}

string Triangle::Tostring()
{
	stringstream write;
	write << "Point A: (" << _a->X() << "," << _a->Y() << ")\n";
	write << "Point B: (" << _b->X() << "," << _b->Y() << ")\n";
	write << "Point C: (" << _c->X() << "," << _c->Y() << ")\n";
	return write.str();
}
//"(6, 15); (1, 20); (61, 92)"
Triangle* Triangle::Parse(string s)
{
	vector<string> t = Tokenizer::Parse(s, ";");
	Point* p1 = Point::Parse(t[0]);
	t[1] = t[1].substr(1);
	Point* p2 = Point::Parse(t[1]);
	t[2] = t[2].substr(1);
	Point* p3 = Point::Parse(t[2]);
	Triangle* tri = new Triangle(p1, p2, p3);
	return tri;
}
void Triangle::parse()
{
	string s = "(6, 15); (1, 20); (61, 92)";
	Triangle* tri = Triangle::Parse(s);
	cout << tri->Tostring();
}
