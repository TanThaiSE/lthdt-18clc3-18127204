#pragma once
#include"NhanVien.h"
class NVCongNhat:public NhanVien
{
private:
	int songay;
public:
	void Input();
	void Output();
	int luong();
	NVCongNhat();
	~NVCongNhat();
};

