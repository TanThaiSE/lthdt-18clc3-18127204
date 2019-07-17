#include "CongTy.h"
void CongTy::InputList()
{
	int n;
	int type;
	countNVSX = 0;
	countNVCN = 0;
	cout << "Nhap so luong nhan vien:";	cin >> n;
	NhanVien* p;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhan vien thu " << i << ":";
		cout << "\nNhap loai: 1-NVVP;2-NVSX;3-NVQL:"; cin >> type;
		p = NULL;
		if (type == 1) //NVVP
		{
			p = new NVVP;
			countNVCN++;
		}
		else if (type == 2)//NVSX
		{
			p = new NVSX;
			countNVSX++;
		}
		else if(type==3) //NVQL
		{
			p = new NVQL;
			countNVCN++;
		}
		p->input();
		a.push_back(p);
	}
}
void CongTy::OutputList()
{
	for (int i = 0; i < a.size(); i++)
	{
		a[i]->output();
	}
}
int CongTy::TotalMoney()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++)
	{
		count += a[i]->salary();
	}
	return count;
}
void CongTy::FindMoneyMax()
{
	
	int salarymax = a[0]->salary();
	for (int i = 1; i < a.size(); i++)
	{
		if (a[i]->salary() > salarymax)
		{
			salarymax = a[i]->salary();
		}
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i]->salary() == salarymax)
		{
			a[i]->output();
		}
	}
}
void CongTy::AmountNVSX()
{
	cout << "Co " << countNVSX << " NVSX trong cong ty\n";
}
void CongTy::AmountNVCN()
{
	cout << "Co " << countNVCN << " NVCN trong cong ty\n";
}
void CongTy::AverageMoney()
{
	cout << "\nLuong trung binh cua cong ty:" << TotalMoney() * 1.0 / (countNVCN + countNVSX);
}
void CongTy::List()
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i]->salary() <3000000)
		{
			a[i]->output();
		}
	}
}
void CongTy::Search_Id()
{
	int ma;
	cout << "\nNhap ma:";	cin >> ma;
	for (int i= 0; i < a.size(); i++)
	{
		if (ma == a[i]->get_id())
		{
			a[i]->output();
		}
	}
}
void CongTy::Search_Name()
{
	string ten;
	cin.ignore();
	cout << "\nNhap ten:";	getline(cin, ten);
	for (int i = 0; i < a.size(); i++)
	{
		if (ten == a[i]->get_name())
		{
			a[i]->output();
		}
	}
}
void CongTy::BirthInMay()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i]->get_month()==5)
		{
			count++;
		}
	}
	cout << "\nCo" << count << " nhan vien sinh trong thang 5";
}

CongTy::CongTy()
{
}


CongTy::~CongTy()
{
	
}
