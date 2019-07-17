#include "NVVP.h"
void NVVP::input()
{
	NhanVien::input();
	cout << "\nNhap so ngay lam viec:";	cin >> daywork;
	cout << "\nNhap tien tro cap:";	cin >> support;
}
void NVVP::output()
{
	NhanVien::output();
	cout << "So ngay lam viec:" << daywork << endl;
	cout << "Tien tro cap:" << support << endl;
}
int NVVP::salary()
{
	return money_basic + daywork * 100000 + support;
}


NVVP::NVVP()
{
}


NVVP::~NVVP()
{
}
