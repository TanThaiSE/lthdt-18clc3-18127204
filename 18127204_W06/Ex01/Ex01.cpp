#include"NhanVien.h"
#include"NVCongNhat.h"
#include"NVSanXuat.h"
int main()
{
	NVCongNhat a;
	a.Input();
	a.luong();
	a.Output();
	NVSanXuat b;
	b.Input();
	b.luong();
	b.Output();
	return 0;

}