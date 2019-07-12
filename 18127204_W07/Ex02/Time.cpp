#include "Time.h"



Time::Time()
{
	time_t now = time(0);
	tm local;
	localtime_s(&local, &now);
	h = local.tm_hour;
	m = local.tm_min;
	s = local.tm_sec;
}
Time::Time(int a, int b, int c)
{
	h = a;
	m = b;
	s = c;
}

Time::~Time()
{
}
