#pragma once
#include"General.h"
class Giaothuong:public General
{
private:
	int dongia;
	int sohang;
public:
	void Input();
	int Result();

	Giaothuong();
	~Giaothuong();
};

