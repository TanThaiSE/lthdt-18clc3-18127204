#include"Fraction.h"
int main()
{
	Fraction* a = new Fraction(7, 3);
	cout << "Fraction A:" << a->Tostring();
	cout << "\nFraction B:";
	Fraction b;
	b.parse();
	return 0;
}