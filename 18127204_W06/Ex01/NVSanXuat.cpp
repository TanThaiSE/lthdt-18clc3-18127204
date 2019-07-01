#include "NVSanXuat.h"
void NVSanXuat::Input()
{
	NhanVien::Input();
	cout << "\nNhap so san pham:";	cin >> produce;
}
void NVSanXuat::Output()
{
	NhanVien::Output();
	cout << "\nSo ngay:" << produce;
	cout << "\nLuong cua nhan vien san xuat la:" << NVSanXuat::luong();
}
int NVSanXuat::luong()
{
	return produce * 20000;
}


NVSanXuat::NVSanXuat()
{
}


NVSanXuat::~NVSanXuat()
{
}
