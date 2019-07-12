#include "GmtTime.h"
string GmtTime::ToString(int gmt)
{
	stringstream write;
	h = h + gmt;
	write << h << ":" << m << ":" << s;
	return write.str();
}


GmtTime::GmtTime():Time()
{

}
GmtTime::GmtTime(int hour, int min, int sec) : Time(hour, min, sec)
{

}

GmtTime::~GmtTime()
{
}
