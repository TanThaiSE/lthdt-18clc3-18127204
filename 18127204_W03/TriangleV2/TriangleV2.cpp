#include"Triangle.h"

int main()
{
	Triangle* a = new Triangle;
	cout << "Point A:(" << a->get_a()->X() << "," << a->get_a()->Y() << ")" << endl;
	cout << "Point B:(" << a->get_b()->X() << "," << a->get_b()->Y() << ")" << endl;
	cout << "Point C:(" << a->get_c()->X() << "," << a->get_c()->Y() << ")" << endl;
	Point* f = new Point(1, 2);
	Point* g = new Point(3, 9);
	Point* j = new Point(7, 9);
	Triangle* h = new Triangle(f, g, j);
	cout << "Point A:(" << h->get_a()->X() << "," << h->get_a()->Y() << ")" << endl;
	cout << "Point B:(" << h->get_b()->X() << "," << h->get_b()->Y() << ")" << endl;
	cout << "Point C:(" << h->get_c()->X() << "," << h->get_c()->Y() << ")" << endl;
	Point* b = new Point(3, 1);
	Triangle* e = new Triangle(b);
	cout << "Point A:(" << e->get_a()->X() << "," << e->get_a()->Y() << ")" << endl;
	cout << "Point B:(" << e->get_b()->X() << "," << e->get_b()->Y() << ")" << endl;
	cout << "Point C:(" << e->get_c()->X() << "," << e->get_c()->Y() << ")" << endl;


	Triangle* c = new Triangle(*h);
	cout << "Point A:(" << c->get_a()->X() << "," << c->get_a()->Y() << ")" << endl;
	cout << "Point B:(" << c->get_b()->X() << "," << c->get_b()->Y() << ")" << endl;
	cout << "Point C:(" << c->get_c()->X() << "," << c->get_c()->Y() << ")" << endl;
	float x = h->Chuvi();
	cout << "Chu vi:" << x << endl;
	float y = h->Dientich();
	cout << "Dien tich:" << y;
	delete h;

}



