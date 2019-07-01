#pragma once
#include<iostream>
#include<string>
using namespace std;
class GiaoVien
{
private:
	string id;
	string name;
	int hesoluong;
	int luongcoban;
	int songaynghi;
	
public:
	void Input();
	void Output();
	int luong();
	GiaoVien(string, string, int, int, int);
	GiaoVien();
	~GiaoVien();
};

