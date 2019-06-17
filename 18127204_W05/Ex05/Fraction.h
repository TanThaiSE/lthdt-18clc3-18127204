#pragma once

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
class Fraction
{
private:
	int num;
	int de;
public:
	int get_num() { return num; };
	int get_de() { return de; };
	void set_num(int Num) { num = Num; };
	void set_de(int De) { de = De; };
	string Tostring();
	Fraction* Parse(string);
	void parse();
public:
	Fraction();
	Fraction(int, int);
	Fraction(const Fraction&);
	~Fraction();
};