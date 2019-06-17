#include"Line.h"

int main()
{
	Point a(14,33);
	Point b(15, 32);
	Line* l1 = new Line(a, b);
	cout << "2 diem cua duong thang la:" << l1->Tostring();
	delete l1;
	cout << "Sau khi tach la:";
	Line line1;
	line1.dosomething();
	
	return 0;

}	

