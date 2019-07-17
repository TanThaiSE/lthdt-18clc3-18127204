#include "NhanVien.h"

void NhanVien::input()
{
	cin.ignore();
	cout << "\nNhap ten:";	getline(cin, name);
	cout << "\nNhap id:";	cin >> id;
	cout << "\nNhap nam:";	cin >> year;
	cout << "\nNhap thang sinh:";	cin >> month_birth;
	cout << "\nNhap luong co ban:"; cin >> money_basic;

}
void NhanVien::output()
{
	cout << "id:" << id << endl;
	cout << "Ten:" << name << endl;
	cout << "Nam:" << year << endl;
	cout << "Thang sinh:" << month_birth << endl;
	cout << "Luong:" << salary() << endl;
}
int NhanVien::salary()
{
	return 0;
}
NhanVien::NhanVien()
{
}


NhanVien::~NhanVien()
{
}
