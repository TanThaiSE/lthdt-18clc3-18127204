#pragma once
#include<iostream>
using namespace std;
class Fraction {
private:
	int _num;
	int _den;
public:
	int get_num() { return _num; }
	int get_den() { return _den; }
	void set_num(int x) { _num = x; }
	void set_den(int y) { _den = y; }
public:
	Fraction();
	Fraction(int, int);
	~Fraction();
};