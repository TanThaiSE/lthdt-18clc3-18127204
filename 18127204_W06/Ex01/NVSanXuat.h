#pragma once
#include"NhanVien.h"
class NVSanXuat:public NhanVien
{
private:
	int produce;
public:
	void Input();
	void Output();
	int luong();
	NVSanXuat();
	~NVSanXuat();
};

