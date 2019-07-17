#include "NVQL.h"

void NVQL::input()
{
	NhanVien::input();
	cout << "\nNhap he so chuc vu:";	cin >> hesochucvu;
	cout << "\nNhap tien thuong:";	cin >> thuong;

}
void NVQL::output()
{
	NhanVien::output();
	cout << "He so chuc vu:" << hesochucvu << endl;
	cout << "\nTien thuong:" << thuong << endl;
}
int NVQL::salary()
{
	return money_basic * hesochucvu + thuong;
}

NVQL::NVQL()
{
}


NVQL::~NVQL()
{
}
