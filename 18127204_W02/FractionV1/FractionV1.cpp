#include"Fraction.h"
int main()
{
	Fraction f1;
	cout << "Fraction 1:";
	cout << f1.get_num() << "/" << f1.get_den();
	Fraction f2(1, 2);
	cout << "Fraction 2:";
	cout << f2.get_num() << "/" << f2.get_den();
	Fraction* p = new Fraction(3, 4);
	cout << "Fraction 3:" << p->get_num() << "/" << p->get_num();
	delete p;
}

