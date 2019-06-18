#pragma once
#include<iostream>
using namespace std;
class Date
{
private:
	int day, moth, year;
public:
	Date();
	Date(int Year);
	Date(int Year, int Month);
	Date(int Year, int Month, int Day);
	Date(const Date&);
	Date& operator=(Date);
	Date Tomorrow();
	Date Yesterday();
	int operator==(Date);
	int operator!=(Date);
	int operator>=(Date);
	int operator<=(Date);
	int operator>(Date);
	int operator<(Date);
	friend Date operator+(Date,int);
	friend Date operator-(Date,int);
	Date& operator++();
	Date operator++(int x);
	Date& operator--();
	Date operator--(int x);
	friend istream& operator>>(istream&, Date&);
	friend ostream& operator<<(ostream&, Date);
	operator int();
	operator long();
	Date& operator+=(int);
	Date& operator-=(int);
};