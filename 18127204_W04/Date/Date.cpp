#include"Ham.h"
int main()
{
	Date d1; 				// Current date: 2/11/2012
	cout << d1 << endl;
	Date d2(2012); 			// 1/1/2012;
	cout << d2<<endl;
	Date d3(2012, 8);		// 01/08/2012
	cout << d3 << endl;
	Date d4(2012, 10, 17); 	// 17/10/2012
	cout << d4 << endl;
	Date d5(d2);
	cout << d5 << endl;
	Date d6;
	d6 = d3;
	cout << d6 << endl;
	d6 = d3.Tomorrow();
	cout << d6 << endl;
	d5 = d2.Yesterday();

	cout << d5 << endl;
	cout << (d6 == d4) << endl;
	cout << (d6 != d4) << endl;
	cout << (d6 >= d4) << endl;
	cout << (d6 <= d4) << endl;
	cout << (d6 > d4) << endl;
	cout << (d6 < d4) << endl;

	d3 = d2 + 1;
	cout << d3 << endl;
	d2 = d3 - 2;
	cout << d2 << endl;
	d4++;
	cout << d4 << endl;
	++d2;
	cout << d2 << endl;
	d5--;
	cout << d5 << endl;
	--d6;
	cout << d6 << endl;
	cout << d3 << endl;
	cin >> d4;
	cout << d4 << endl;
	cout << (int)d3<<endl;			// from the first day of current year
	
	cout << (long)d4 << endl;	 		// from 1/1/1

	Date d7;
	d7 += 7;
	cout << d7 << endl;
	d2 -= 6;
	cout << d2 << endl;
	return 0;
}