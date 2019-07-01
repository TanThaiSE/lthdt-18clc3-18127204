#include "GiaoVien.h"
void GiaoVien::Input()
{
	cin.ignore();
	cout << "\nNhap ma giao vien:";	cin >> id;
	cin.ignore();
	cout << "\nNhap ho ten:"; getline(cin, name);
	cout << "\nNhap he so luong:";	cin >> hesoluong;
	cout << "\nNhap luong co ban:"; cin >> luongcoban;
	cout << "\nNhap so ngay nghi:";	cin >> songaynghi;
}
void GiaoVien::Output()
{
	cout << "\nMa giao vien:"<<id;
	cout << "\nHo ten:" << name;
	cout << "\nHe so luong:" << hesoluong;
	cout << "\nLuong co ban:" << luongcoban;
	cout << "\nSo ngay nghi:" << songaynghi;
	cout << "\nLuong giao vien:" << GiaoVien::luong();
}
int GiaoVien::luong()
{
	return hesoluong * luongcoban - songaynghi * 100000;
}
GiaoVien::GiaoVien(string ID, string NAME, int hesluong, int luongcb, int ngaynghi)
{
	id = ID;
	name = NAME;
	hesoluong = hesluong;
	luongcoban = luongcb;
	songaynghi = ngaynghi;
}


GiaoVien::GiaoVien()
{
	id = '1';
	name = 'an';
	hesoluong = 1;
	luongcoban = 1;
	songaynghi = 0;

}


GiaoVien::~GiaoVien()
{
}
