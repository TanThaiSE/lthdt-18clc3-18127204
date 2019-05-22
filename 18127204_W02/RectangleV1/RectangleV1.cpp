#include"Rectangle.h"
int main()
{
	Rectangle a;
	cout << "Point begin:(" << a.get_topLeft().X() << "," << a.get_topLeft().Y() << ")" << endl;
	cout << "Point end:(" << a.get_bottomRight().X() << "," << a.get_bottomRight().Y() << ")" << endl;
	Point b(3, 1), c(4, 9);
	Rectangle d(b, c);
	cout << "Point begin:(" << d.get_topLeft().X() << "," << d.get_topLeft().Y() << ")" << endl;
	cout << "Point end:(" << d.get_bottomRight().X() << "," << d.get_bottomRight().Y() << ")" << endl;
	Point e(3, 5), f(4, 4);
	Rectangle* g = new Rectangle(e, f);
	cout << "Point begin:(" << g->get_topLeft().X() << "," << g->get_topLeft().Y() << ")" << endl;
	cout << "Point end:(" << g->get_bottomRight().X() << "," << g->get_bottomRight().Y() << ")" << endl;
}

