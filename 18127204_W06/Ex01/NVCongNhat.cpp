#include "NVCongNhat.h"
void NVCongNhat::Input()
{
	NhanVien::Input();
	cout << "\nNhap so san pham:";	cin >> songay;
}
void NVCongNhat::Output()
{
	NhanVien::Output();
	cout << "\nSo ngay:" << songay;
	cout << "\nLuong cua nhan vien cong nhat la:" << NVCongNhat::luong();
}
int NVCongNhat::luong()
{
	return songay * 300000;
}


NVCongNhat::NVCongNhat()
{

}


NVCongNhat::~NVCongNhat()
{
}
