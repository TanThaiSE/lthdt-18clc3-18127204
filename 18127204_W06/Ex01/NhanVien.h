#pragma once
#include<iostream>
#include<string>
using namespace std;
class NhanVien
{
private:
	string id;
	string name;
	string daybirth;
	string address;
public:
	void Input();
	void Output();
	NhanVien();
	NhanVien(string, string, string, string);
	~NhanVien();
};

