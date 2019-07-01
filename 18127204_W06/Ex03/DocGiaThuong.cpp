#include "DocGiaThuong.h"

void DocGiaThuong::Input()
{
	DocGiaVIP::Input();
	cout << "\nNhap so sach muon trong thang:";	cin >> sosachmuon;
}
void DocGiaThuong::Output()
{
	DocGiaVIP::Output();
	cout << "\nSo sach muon trong thang:" << sosachmuon;
}
int DocGiaThuong::fee()
{
	return sosachmuon * 5000;
}

DocGiaThuong::DocGiaThuong()
{
}


DocGiaThuong::~DocGiaThuong()
{
}
