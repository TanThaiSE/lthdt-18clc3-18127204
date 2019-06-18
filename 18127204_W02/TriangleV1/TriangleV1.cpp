#include"Triangle.h"
int main()
{
	Triangle a;
	cout << "Point A:(" << a.get_a().X() << "," << a.get_a().Y() << ")" << endl;
	cout << "Point B:(" << a.get_b().X() << "," << a.get_b().Y() << ")" << endl;
	cout << "Point C:(" << a.get_c().X() << "," << a.get_c().Y() << ")" << endl;
	
	Point b(3, 1), c(4, 9), d(7, 5);
	Triangle e(b, c, d);
	cout << "Point A:(" << e.get_a().X() << "," << e.get_a().Y() << ")" << endl;
	cout << "Point B:(" << e.get_b().X() << "," << e.get_b().Y() << ")" << endl;
	cout << "Point C:(" << e.get_c().X() << "," << e.get_c().Y() << ")" << endl;

	Point f(1, 2), g(3, 9), j(7, 9);
	Triangle* h = new Triangle(f, g, j);
	cout << "Point A:(" << h->get_a().X() << "," << h->get_a().Y() << ")" << endl;
	cout << "Point B:(" << h->get_b().X() << "," << h->get_b().Y() << ")" << endl;
	cout << "Point C:(" << h->get_c().X() << "," << h->get_c().Y() << ")" << endl;
	delete h;

}


