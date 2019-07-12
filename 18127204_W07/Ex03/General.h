#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<time.h>
using namespace std;
class General
{
protected:	
	int n;
	vector<int> x;
public:
	void input(int);
	void output(string);
	bool checksinh(int);
	int sinh();
	int chosua(int);
	void keu(string);
	
	General();
	~General();
};

