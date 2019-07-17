#include "NVSX.h"

void NVSX::input()
{
	NhanVien::input();
	cout << "\nNhap so san pham:";	cin >> goods;

}
void NVSX::output()
{
	NhanVien::output();
	cout << "So san pham:" << goods << endl;

}
int NVSX::salary()
{
	return money_basic + goods * 2000;
}
NVSX::NVSX()
{
}


NVSX::~NVSX()
{
}
