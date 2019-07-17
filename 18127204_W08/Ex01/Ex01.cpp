#include"CongTy.h"
int main()
{
	CongTy x;
	x.InputList();
	x.OutputList();
	cout << "\nTong tien luong cua tat ca nhan vien:" << x.TotalMoney() << endl;
	cout << "\nNhan vien co luong cao nhat:";
	x.FindMoneyMax();
	x.AmountNVSX();
	x.AmountNVCN();
	x.AverageMoney();
	cout << "\nCac nhan vien co luong thap hon 3000000";
	x.List();
	cout << "\nNhan vien cung ma nhap vao";
	x.Search_Id();
	cout << "\nNhan vien cung ten nhap vao";
	x.Search_Name();
	x.BirthInMay();
	return 0;
}