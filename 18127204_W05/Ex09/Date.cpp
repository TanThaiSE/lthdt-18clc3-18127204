#include "Date.h"
#include"Tokenizer.h"

Date::Date()
{
	time_t now = time(0);
	tm local;
	localtime_s(&local, &now);
	day = local.tm_mday;
	month = local.tm_mon;
	year= local.tm_year + 1900;

}

Date::~Date()
{

}
Date::Date(int x, int y, int z)
{
	day = x;
	month = y;
	year = z;
}
bool Date::IsLeapYear(int x)
{
	this->year = x;
	if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Date::IsValidDate(int x, int y , int z)
{
	this->day = x;
	this->month = y;
	this->year = z;
	if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11)
	{
		if (this->day >= 1 && this->day <= 30)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12)
	{
		if (this->day >= 1 && this->day <= 31)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (this->month == 2)
	{
		if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
		{
			if (this->day>=1&&this->day <= 29)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (this->day >= 1 && this->day == 28)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}
string Date::Tostring()
{
	stringstream write;
	write << "Date:" << day << "\nMonth:" << month << "\nYear:" << year<<"\n";
	return write.str();
}
//"24/12/2008"
Date* Date::Parse(string s)
{
	vector<string>d = Tokenizer::Parse(s, "/");
	int x = stoi(d[0]);
	int y = stoi(d[1]);
	int z = stoi(d[2]);
	Date* da = new Date(x, y, z);
	return da;
}
void Date::parse()
{
	string s = "24/12/2008";
	Date* dat = Date::Parse(s);
	cout << dat->Tostring();
}