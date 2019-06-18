#include"Line.h"

int main()
{
	Line l1;
	cout << "Point start:(" << l1._START().X() << "," << l1._START().Y()<<")"<<endl;
	cout << "Point end:(" << l1._END().X() << "," << l1._END().Y()<<")"<<endl;
	
	Point a(0, 1), b(0, 3);
	Line l2(a, b);
	
	cout << "Point start:(" << l2._START().X() << "," << l2._START().Y() << ")" << endl;
	cout << "Point end:(" << l2._END().X() << "," << l2._END().Y()<<")"<<endl;

	Point c(0, 2), d(4, 3);
	Line* l3 = new Line(c, d);
	
	cout<<"Point start:"<<l3->_START().X()<< "," << l3->_START().Y() << ")" << endl;
	cout << "Point start:" << l3->_END().X() << "," << l3->_END().Y() << ")" << endl;
}

