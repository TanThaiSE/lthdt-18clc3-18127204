#pragma once
#include"Time.h"
class GmtTime:public Time
{
private:
	int hour, min, sec;
public:
	string ToString(int);
	GmtTime();
	GmtTime(int, int, int);
	~GmtTime();
};

