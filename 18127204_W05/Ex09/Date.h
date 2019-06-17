#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<time.h>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	bool IsLeapYear(int);
	bool IsValidDate(int, int, int);
	string Tostring();
	Date* Parse(string);
	void parse();
public:
	Date();
	Date(int, int, int);
	~Date();
};

