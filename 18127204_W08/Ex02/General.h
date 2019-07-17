#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class General
{
protected:
	int loai;
public:
	int get_loai() { return loai; }
	void set_loai(int l) { loai=l; }
	virtual void Input();
	virtual int Result();
	General();
	~General();
};

