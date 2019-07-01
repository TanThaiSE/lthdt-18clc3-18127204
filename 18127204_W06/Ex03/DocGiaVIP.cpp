#include "DocGiaVIP.h"
void DocGiaVIP::Input()
{
	cin.ignore();
	cout << "\nNhap ma:";	cin >> id;
	cin.ignore();
	cout << "\nNhap ho ten:";	getline(cin, name);
	cin.ignore();
	cout << "\nNhap ngay het han:";	cin >>  deadline;
	cin.ignore();
	cout << "\nNhap gioi tinh:";	cin >> gender;
}
void DocGiaVIP::Output()
{
	cout << "\nMa:"<<id;
	cout << "\nHo ten:" << name;
	cout << "\nNgay het han:" << deadline;
	cout << "\nGioi tinh:" << gender;
	
	
}
int DocGiaVIP::fee()
{
	return 50000;
}
DocGiaVIP::DocGiaVIP(string ma, string hoten, string ngayhethan, string gioitinh)
{
	id = ma;
	name = hoten;
	deadline = ngayhethan;
	gender = gioitinh;
}


DocGiaVIP::DocGiaVIP()
{
	id = '1';
	name = 'an';
	deadline = '10';
	gender = 'nam';
}


DocGiaVIP::~DocGiaVIP()
{
}
