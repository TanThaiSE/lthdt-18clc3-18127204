#pragma once
#include"NhanVien.h"
#include"NVVP.h"
#include"NVSX.h"
#include"NVQL.h"
class CongTy
{
private:
	vector<NhanVien*> a;
	int countNVSX;
	int countNVCN;
public:
	void InputList();
	void OutputList();
	int TotalMoney();
	void FindMoneyMax();
	void AmountNVSX();
	void AmountNVCN();
	void AverageMoney();
	void List();
	void Search_Id();
	void Search_Name();
	void BirthInMay();
	CongTy();
	~CongTy();
};

