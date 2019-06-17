#include"Triangle.h"
int main()
{
	Point* f = new Point(1, 2);
	Point* g = new Point(3, 9);
	Point* j = new Point(7, 9);
	Triangle* h = new Triangle(f, g, j);
	cout << "Toa do la:" << h->Tostring();
	delete f, g, h;
	Triangle a;
	a.parse();
	return 0;
}