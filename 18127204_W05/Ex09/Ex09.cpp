#include"Date.h"
int main()
{
	Date d1;
	cout << d1.Tostring();
	Date date1(1, 7, 2000);
	cout << endl;
	cout << date1.Tostring();
	int year1;
	cout << "Input year:";	cin >> year1;
	Date d2;
	bool check=d2.IsLeapYear(year1);
	if (check == true)
	{
		cout << "Is leap year" << endl;
	}
	else
	{
		cout << "Not leap year" << endl;
	}
	Date d3;
	int d, m, y;
	cout << "Input day:";	cin >> d;
	cout << "Input month:";	cin >> m;
	cout << "Input year:";	cin >> y;
	bool check1 = d3.IsValidDate(d, m, y);
	if (check1 == true)
	{
		cout << "Is valid date" << endl;
	}
	else
	{
		cout << "Not valid year" << endl;
	}
	Date d4;
	d4.parse();
	return 0;
}

