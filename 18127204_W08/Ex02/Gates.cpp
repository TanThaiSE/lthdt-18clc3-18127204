#include "Gates.h"

void Gates::Input_Gate()
{
	int n;
	int type;
	General* p;
	cout << "\nNhap so cong:";	cin >> n;
	for (int i = 0; i < n; i++)
	{
		p = NULL;
		cout << "\nNhap cong thu: " << i << ":";
		cout << "\nNhap loai cong:";
		cin >> type;
		if (type == 1) //cong giao thuong
		{
			p = new Giaothuong;
			
		}
		else if (type == 2) //cong hoc thuat
		{
			p = new Hocthuat;
		}
		else if (type == 3) //cong suc manh
		{
			p = new Sucmanh;
		}
		p->Input();
		p->set_loai(type);
		a.push_back(p);

	}
}

void Gates::StartGame()
{
	Player x;

	x.Input_infor();
	int i = 0;
	while (i < a.size())
	{
		if (a[i]->get_loai()==1)
		{
			x.set_tien(x.get_tien() - a[i]->Result());
			
		}
		else if (a[i]->get_loai() == 2)
		{
			x.set_tien(x.get_tritue() - a[i]->Result());
		}
		else if (a[i]->get_loai() == 3)
		{
			x.set_tien(x.get_sucmanh() - a[i]->Result());
		}
		i++;
	}
	if (x.get_tien() < 0 || x.get_tritue() < 0 || x.get_sucmanh() < 0)
	{
		cout << "Cong chua khong cuu duoc";
	}
	else
	{
		cout << "Cong chua cuu duoc" << endl;
		cout << "So tien con lai:" << x.get_tien() << endl;
		cout << "Chi so tri tue con lai:" << x.get_tritue() << endl;
		cout << "Chi so suc manh con lai:" << x.get_sucmanh() << endl;
	}
}
Gates::Gates()
{
	
}


Gates::~Gates()
{
}
