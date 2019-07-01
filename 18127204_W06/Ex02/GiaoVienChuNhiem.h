#pragma once
#include"GiaoVien.h"
class GiaoVienChuNhiem:public GiaoVien
{
private:
	string lopcn;
public:
	void Input();
	void Output();
	int luong();
	GiaoVienChuNhiem();
	~GiaoVienChuNhiem();
};

