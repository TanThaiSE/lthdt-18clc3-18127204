#include"Circle.h"
int main()
{
	Circle l1;
	cout << "Center:(" << l1.get_center().X() << "," << l1.get_center().Y() << ")" << endl;
	cout << "Radius:" << l1.get_radius() << endl;

	Point a(3, 5);
	Circle l2(a, 3.05);
	cout << "Center:(" << l2.get_center().X() << "," << l2.get_center().Y() << ")" << endl;
	cout << "Radius:" << l2.get_radius() << endl;

	Point b(7, 3);
	Circle* l3 = new Circle(b, 4.2);
	cout << "Center:(" << l3->get_center().X() << "," << l3->get_center().Y() << ")" << endl;
	cout << "Radius:" << l3->get_radius() << endl;
	delete l3;

}
