#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class NhanVien
{
protected:
	string name;
	int id;
	int year;
	int month_birth;
	int money_basic;
public:
	virtual void input();
	virtual void output();
	virtual int salary();
	int get_id() { return id; }
	string get_name() { return name; }
	int get_month() { return month_birth; }
	NhanVien();
	~NhanVien();
};


