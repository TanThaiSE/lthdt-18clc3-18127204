#include "GiaoVienChuNhiem.h"
void GiaoVienChuNhiem::Input()
{
	GiaoVien::Input();
	cin.ignore();
	cout << "\nNhap ten lop chu nhiem:";	getline(cin, lopcn);
}
void GiaoVienChuNhiem::Output()
{
	GiaoVien::Output();
	cout << "\nTen lop chu nhiem:" << lopcn;
}
int GiaoVienChuNhiem::luong()
{
	return GiaoVien::luong() + 500000;
}


GiaoVienChuNhiem::GiaoVienChuNhiem()
{
}


GiaoVienChuNhiem::~GiaoVienChuNhiem()
{
}
