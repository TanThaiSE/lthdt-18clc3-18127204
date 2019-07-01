#include "NhanVien.h"
void NhanVien::Input()
{
	cin.ignore();
	cout << "\nNhap ma nhan vien:";	cin >> id;
	cin.ignore();
	cout << "\nNhap ho ten:";	getline(cin, name);
	cin.ignore();
	cout << "\nNhap ngay sinh:";	cin >> daybirth;
	cin.ignore();
	cout << "\nNhap dia chi:";	getline(cin, address);

}

void NhanVien::Output()
{
	cout << "\nMa nhan vien:" << id;
	cout << "\nHo ten:" << name;
	cout << "\nNgay sinh:" << daybirth;
	cout << "\nDia chi:" << address;
}
NhanVien::NhanVien()
{

}


NhanVien::~NhanVien()
{
	id ='1';
	name = 'an';
	daybirth ='1';
	address = '1';
}
NhanVien::NhanVien(string ID, string NAME, string DAY, string ADDRESS)
{
	id = ID;
	name = NAME;
	daybirth = DAY;
	address = ADDRESS;
}