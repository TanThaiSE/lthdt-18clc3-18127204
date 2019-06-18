#pragma once
#include<iostream>
using namespace std;
class Fraction
{
private:
	int nu;
	int de;
public:
	Fraction& operator=(Fraction);
	Fraction operator+(Fraction);
	Fraction operator-(Fraction);
	Fraction operator*(Fraction);
	Fraction operator/(Fraction);
	
	bool operator==(Fraction);
	bool operator!=(Fraction);
	bool operator>=(Fraction);
	bool operator>(Fraction);
	bool operator<=(Fraction);
	bool operator<(Fraction);
	friend istream& operator>>(istream&, Fraction&);
	friend ostream& operator<<(ostream&, Fraction);
	Fraction& operator+=(Fraction);
	Fraction& operator-=(Fraction);
	Fraction& operator*=(Fraction);
	Fraction& operator/=(Fraction);

	Fraction operator+(int);
	Fraction operator-(int);
	friend Fraction operator+(int,Fraction);
	friend Fraction operator*(int, Fraction);


	Fraction& operator++();
	Fraction operator++(int x);
	Fraction& operator--();
	Fraction operator--(int x);
	operator float();
	Fraction();
	Fraction(int Num, int De);
	Fraction(const Fraction&);
	~Fraction();
};