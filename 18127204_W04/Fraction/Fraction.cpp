#include"Ham.h"
int main()
{
	Fraction f1, f2;	// 0/1
	cout << "Fraction 1:";
	cout<< f1 << endl;
	cout << "Fraction 2:";
	cout << f2 << endl;
	Fraction f3(1, -7);				// -1/7
	cout << "Fraction 3:";
	cout << f3 << endl;
	Fraction f4(f3);				// Copy constructor
	cout << "Fraction 4:";
	cout << f4 << endl;
	
	Fraction f5 = f2;					// Copy constructor
	cout << "Fraction 5:";
	cout << f5 << endl;
	Fraction f6, f7, f8;					// Default constructor
	f6 = f3;							// Operator =
	cout << "Fraction 6:";
	cout << f6 << endl;
	f7 = f1 + f5;
	cout << "Fraction 7:";
	cout << f7 << endl;
	f8 = f2 - f4;
	cout << "Fraction 8:";
	cout << f8 << endl;
	f3 = f1 * f7;
	cout << "Fraction 3:";
	cout << f3 << endl;
	f5 = f6 / f2;
	cout << "Fraction 5:";
	cout << f5 << endl;
	if (f2 == f3)
		cout << "f2==f3";
	
	if (f3 != f1)
		cout << "f3!=f1";
	if (f2 >= f5)
		cout << "f2>=f5";
	if (f2 > f5)
		cout << "f2>f5";
	if (f5 <= f3)
		cout << "f5<=f3";
	if (f5 < f3)
		cout << "f5<f3";
		
	
	f1 = f2 + 3;
	f3 = -7 + f1;
	f5 = 7 * f3;
	f6 = f4 - 6;

	cout << "Fraction 3:";
	cout << f3 << endl;
	cout << "Fraction 6:";
	cout << f6 << endl;

	f1 += f5;
	cout << "Fraction 1:";
	cout << f1 << endl;
	f6 -= f7;
	cout << "Fraction 6:";
	cout << f6 << endl;
	f8 *= f1;
	cout << "Fraction 8:";
	cout << f8 << endl;
	f8 /= f2;
	cout << "Fraction 8:";
	cout << f8 << endl;

	cout << "Fraction 8:";
	cout << f8++<<endl;
	cout << "Fraction 7:";
	cout << ++f7 << endl;
	cout << "Fraction 8:";
	cout << f8-- << endl;
	cout << "Fraction 7:";
	cout << --f7 << endl;

	float f = (float)f3;				// 3/2 => 1.5
	cout << "Value f:";
	cout << f;
	return 0;
}