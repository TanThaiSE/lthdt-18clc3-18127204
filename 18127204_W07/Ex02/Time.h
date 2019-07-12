#pragma once
#include<iostream>
#include<ctime>
#include<string>
#include<sstream>
using namespace std;
class Time
{
protected:
	int h;
	int m;
	int s;
public:
	Time();
	Time(int,int,int);
	~Time();
};

