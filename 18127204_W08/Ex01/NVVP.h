	#pragma once
#include"NhanVien.h"
class NVVP:public NhanVien
{
private:
	int daywork;
	int support;

public:
	void input();
	void output();
	int salary();
	NVVP();
	~NVVP();
};

