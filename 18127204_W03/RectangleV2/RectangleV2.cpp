#include"Rectangle.h"
int main()
{
	Rectangle* a = new Rectangle;
	cout << "Point begin:(" << a->get_topLeft()->X() << "," << a->get_topLeft()->Y() << ")" << endl;
	cout << "Point end:(" << a->get_bottomRight()->X() << "," << a->get_bottomRight()->Y() << ")" << endl;

	Point* e = new Point(12, 4);
	Point* f = new Point(1, 3);
	Rectangle* g = new Rectangle(e, f);

	cout << "Point begin:(" << g->get_topLeft()->X() << "," << g->get_topLeft()->Y() << ")" << endl;
	cout << "Point end:(" << g->get_bottomRight()->X() << "," << g->get_bottomRight()->Y() << ")" << endl;
	Point* b = new Point(1, 2);
	Rectangle* d = new Rectangle(b);
	cout << "Point begin:(" << d->get_topLeft()->X() << "," << d->get_topLeft()->Y() << ")" << endl;
	cout << "Point end:(" << d->get_bottomRight()->X() << "," << d->get_bottomRight()->Y() << ")" << endl;


	Rectangle* j = new Rectangle(*g);
	cout << "Point begin:(" << j->get_topLeft()->X() << "," << j->get_topLeft()->Y() << ")" << endl;
	cout << "Point end:(" << j->get_bottomRight()->X() << "," << j->get_bottomRight()->Y() << ")" << endl;

	float x = g->Chuvi();
	cout << "Chu vi:" << x << endl;
	float y = g->Dientich();
	cout << "Dien tich:" << y;

	return 0;

}

