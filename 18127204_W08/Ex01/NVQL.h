#pragma once
#include"NhanVien.h"
class NVQL:public NhanVien
{
private:
	int hesochucvu;
	int thuong;
public:
	void input();
	void output();
	int salary();
	NVQL();
	~NVQL();
};

