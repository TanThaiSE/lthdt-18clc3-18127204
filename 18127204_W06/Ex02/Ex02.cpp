#include"GiaoVien.h"
#include"GiaoVienChuNhiem.h"
int main()
{
	GiaoVien a;
	a.Input();
	a.luong();
	a.Output();
	GiaoVienChuNhiem b;
	b.Input();
	b.luong();
	b.Output();
	return 0;
}