#pragma once
#include"NhanVien.h"
class NVSX:public NhanVien
{
private:
	int goods;
	
public:
	void input();
	void output();
	int salary();
	NVSX();
	~NVSX();
};

