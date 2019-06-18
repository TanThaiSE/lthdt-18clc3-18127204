#include"Ham.h"
Date::Date()
{
	this->day = 2;
	this->moth = 11;
	this->year = 2012;	
}
Date::Date(int Year)
{
	this->day = 1;
	this->moth = 1;
	this->year = Year;
}
Date::Date(int Year, int Month)
{
	this->day = 1;
	this->moth = Month;
	this->year = Year;
}
Date::Date(int Year, int Month, int Day)
{
	this->day = Day;
	this->moth = Month;
	this->year = Year;
}
Date::Date(const Date& d)
{
	this->day = d.day;
	this->moth = d.moth;
	this->year = d.year;
}
Date& Date::operator=(Date d)
{
	this->day = d.day;
	this->moth = d.moth;
	this->year = d.year;
	return *this;
}

Date Date::Tomorrow()
{
	Date d;
	d.day = day;
	d.moth = moth;
	d.year = year;
	if (this->moth == 4 || this->moth == 6 || this->moth == 9 || this->moth == 11)
	{
		if (this->day == 30)
		{
			d.day = 1;
			d.moth = d.moth + 1;
		}
		else
		{
			d.day = d.day + 1;
		}
	}
	else if (this->moth == 1|| this->moth == 3 || this->moth == 5 || this->moth == 7 || this->moth == 8 || this->moth == 10 || this->moth == 12)
	{
		if (this->day == 31)
		{
			if (this->moth == 12)
			{
				d.day = 1;
				d. moth = 1;
				d.year = d.year + 1;
			}
			else
			{
				d.day = 1;
				d.moth = d.moth + 1;
			}
		}
		else
		{
			d.day = d.day + 1;
		}
	}
	else if (this->moth == 2)
	{
		if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
		{
				if (this->day == 29)
				{
					d.day = 1;
					d.moth = 3;
				}
				else
				{
					d.day = d.day + 1;
					d.moth = 2;
				}
		}
		else
		{
			if (this->day == 28)
			{
				d.day = 1;
				d.moth = 3;
			}
			else
			{
				d.day = d.day + 1;
				d.moth = 2;
			}
		}
	}
	return d;
}

Date Date::Yesterday()
{
	Date d;
	d.day = day;
	d.moth = moth;
	d.year = year;
	if (this->moth == 4 || this->moth == 6 || this->moth == 9 || this->moth == 11||this->moth==2)
	{
		if (this->day == 1)
		{
			d.day = 31;
			d.moth = d.moth - 1;
		}
		else
		{
			d.day = d.day - 1;
		}
	}
	else if (this->moth == 1 || this->moth == 3 || this->moth == 5 || this->moth == 7 || this->moth == 8 || this->moth == 10 || this->moth == 12)
	{
		if (this->moth == 1)
		{
			if (this->day == 1)
			{
				d.day = 31;
				d.moth = 12;
				d.year = d.year - 1;
			}
			else
			{
				d.day = d.day - 1;
			}
		}
		else if (this->moth == 3)
		{
			if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
			{
				if (this->day == 1)
				{
					d.day = 29;
					d.moth = 2;
				}
				else
				{
					d.day = d.day - 1;
					d.moth = 3;
				}
			}
			else
			{
				if (this->day == 1)
				{
					d.day = 28;
					d.moth = 2;
				}
				else
				{
					d.day = d.day - 1;
					d.moth = 3;
				}
			}
		}
	}
	
	return d;
}

int Date::operator==(Date d)
{
	if (this->day == d.day && this->moth == d.moth && this->year == d.year)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int Date::operator!=(Date d)
{
	if (this->day != d.day || this->moth != d.moth || this->year != d.year)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int Date::operator>=(Date d)
{
	if (this->year > d.year)
	{
		return 1;
	}
	else if (this->year == d.year)
	{
		if (this->moth > d.moth)
		{
			return 1;
		}
		else if (this->moth == d.moth)
		{
			if (this->day >= d.day)
			{
				return 1;
			}
		}
	}
	return 0;
}
int Date::operator<=(Date d)
{
	if (this->year < d.year)
	{
		return 1;
	}
	else if (this->year == d.year)
	{
		if (this->moth < d.moth)
		{
			return 1;
		}
		else if (this->moth == d.moth)
		{
			if (this->day <= d.day)
			{
				return 1;
			}
		}
	}
	return 0;
}
int Date::operator>(Date d)
{
	if (this->year > d.year)
	{
		return 1;
	}
	else if (this->year == d.year)
	{
		if (this->moth > d.moth)
		{
			return 1;
		}
		else if (this->moth == d.moth)
		{
			if (this->day > d.day)
			{
				return 1;
			}
		}
	}
	return 0;
}
int Date::operator<(Date d)
{
	if (this->year < d.year)
	{
		return 1;
	}
	else if (this->year == d.year)
	{
		if (this->moth < d.moth)
		{
			return 1;
		}
		else if (this->moth == d.moth)
		{
			if (this->day < d.day)
			{
				return 1;
			}
		}
	}
	return 0;
}
Date operator+(Date p,int a )
{
	Date d;
	d.day = p.day +a;
	d.moth = p.moth;
	d.year = p.year;
	
	if (d.moth == 4 || d.moth == 6 || d.moth == 9 || d.moth == 11)
	{
		if (d.day > 30)
		{
			d.day= d.day - 30;
			d.moth = d.moth + 1;
		}
	}
	else if (p.moth == 1 || p.moth == 3 || d.moth == 5 || d.moth == 7 || d.moth == 8 || d.moth == 10 || d.moth == 12)
	{
		if (d.moth == 12)
		{
			if (d.day > 31)
			{
				d.day= d.day - 31;
				d.moth = 1;
				d.year = d.year + 1;
			}
		}
		else
		{
			if (d.day > 31)
			{
				d.day = d.day - 31;
				d.moth= d.moth + 1;
			}

		}

	}
	else if (d.moth == 2)
	{
		if ((d.year % 400 == 0) || (d.year % 100 != 0 && d.year % 4 == 0))
		{
			if (d.day > 29)
			{
				d.day = d.day - 29;;
				d.moth = 3;
			}
		}
		else
		{
			if (d.day > 28)
			{
				d.day = d.day - 28;
				d.moth = 3;
			}
		}
	}
	
	return d;
	
}

Date operator-(Date p, int a)
{
	Date d;
	d.day = p.day - a;
	d.moth = p.moth;
	d.year = p.year;
	if (d.moth == 4 || d.moth == 6 || d.moth == 9 || d.moth == 11 || d.moth == 2)
	{
		if (d.day < 1)
		{
			d.day = d.day + 31;
			d.moth = d.moth - 1;
		}
	}
	else if (d.moth == 1 || d.moth == 5 || d.moth == 7 || d.moth == 8 || d.moth == 10 || d.moth == 12)
	{
		if (d.moth == 1)
		{
			if (d.day < 1)
			{
				d.day = d.day + 31;
				d.moth = 12;
				d.year = d.year - 1;
			}
		}
		else
		{
			if (d.day < 31)
			{
				d.day = d.day + 31;
				d.moth = d.moth - 1;
			}
		}

	}
	else if (d.moth == 3)
	{
		if ((d.year % 400 == 0) || (d.year % 100 != 0 && d.year % 4 == 0))
		{
			if (d.day < 1)
			{
				d.day = d.day + 29;
				d.moth = 2;
			}
		}
		else
		{
			if (d.day< 1)
			{
				d.day = d.day + 28;
				d.moth = 2;
			}
		}
	}
	return d;
}

Date& Date::operator++()
{
	if (this->moth == 4 || this->moth == 6 || this->moth == 9 || this->moth == 11)
	{
		if (this->day == 30)
		{
			this->day = 1;
			this->moth = this->moth + 1;
		}
		else
		{
			this->day = this->day + 1;
		}
	}
	else if (this->moth == 1 || this->moth == 3 || this->moth == 5 || this->moth == 7 || this->moth == 8 || this->moth == 10 || this->moth == 12)
	{
		if (this->day == 31)
		{
			if (this->moth == 12)
			{
				this->day = 1;
				this->moth = 1;
				this->year = this->year + 1;
			}
			else
			{
				this->day = 1;
				this->moth = this->moth + 1;
			}
		}
		else
		{
			this->day = this->day + 1;
		}
	}
	else if (this->moth == 2)
	{
		if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
		{
			if (this->day == 29)
			{
				this->day = 1;
				this->moth = 3;
			}
			else
			{
				this->day = this->day + 1;
				this->moth = 2;
			}
		}
		else
		{
			if (this->day == 28)
			{
				this->day = 1;
				this->moth = 3;
			}
			else
			{
				this->day = this->day + 1;
				this->moth = 2;
			}
		}
	}
	return *this;
}
Date Date::operator++(int x)
{
	Date temp = *this;
	if (this->moth == 4 || this->moth == 6 || this->moth == 9 || this->moth == 11)
	{
		if (this->day == 30)
		{
			this->day = 1;
			this->moth = this->moth + 1;
		}
		else
		{
			this->day = this->day + 1;
		}
	}
	else if (this->moth == 1 || this->moth == 3 || this->moth == 5 || this->moth == 7 || this->moth == 8 || this->moth == 10 || this->moth == 12)
	{
		if (this->day == 31)
		{
			if (this->moth == 12)
			{
				this->day = 1;
				this->moth = 1;
				this->year = this->year + 1;
			}
			else
			{
				this->day = 1;
				this->moth = this->moth + 1;
			}
		}
		else
		{
			this->day = this->day + 1;
		}
	}
	else if (this->moth == 2)
	{
		if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
		{
			if (this->day == 29)
			{
				this->day = 1;
				this->moth = 3;
			}
			else
			{
				this->day = this->day + 1;
				this->moth = 2;
			}
		}
		else
		{
			if (this->day == 28)
			{
				this->day = 1;
				this->moth = 3;
			}
			else
			{
				this->day = this->day + 1;
				this->moth = 2;
			}
		}
	}
	return temp;
}
Date& Date::operator--()
{
	if (this->moth == 4 || this->moth == 6 || this->moth == 9 || this->moth == 11 || this->moth == 2)
	{
		if (this->day == 1)
		{
			this->day = 31;
			this->moth = this->moth - 1;
		}
		else
		{
			this->day = this->day - 1;
		}
	}
	else if (this->moth == 1 || this->moth == 3 || this->moth == 5 || this->moth == 7 || this->moth == 8 || this->moth == 10 || this->moth == 12)
	{
		if (this->moth == 1)
		{
			if (this->day == 1)
			{
				this->day = 31;
				this->moth = 12;
				this->year = this->year - 1;
			}
			else
			{
				this->day = this->day - 1;
			}
		}
		else if (this->moth == 3)
		{
			if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
			{
				if (this->day == 1)
				{
					this->day = 29;
					this->moth = 2;
				}
				else
				{
					this->day = this->day - 1;
					this->moth = 3;
				}
			}
			else
			{
				if (this->day == 1)
				{
					this->day = 28;
					this->moth = 2;
				}
				else
				{
					this->day = this->day - 1;
					this->moth = 3;
				}
			}
		}
		else
		{
			if (this->day == 1)
			{
				this->day = 31;
				this->moth = this->moth-1;
			}
			else
			{
				this->day = this->day - 1;
			}
		}
	}
	return *this;
}
Date Date::operator--(int x)
{
	Date temp = *this;
	if (this->moth == 4 || this->moth == 6 || this->moth == 9 || this->moth == 11 || this->moth == 2)
	{
		if (this->day == 1)
		{
			this->day = 31;
			this->moth = this->moth - 1;
		}
		else
		{
			this->day = this->day - 1;
		}
	}
	else if (this->moth == 1 || this->moth == 3 || this->moth == 5 || this->moth == 7 || this->moth == 8 || this->moth == 10 || this->moth == 12)
	{
		if (this->moth == 1)
		{
			if (this->day == 1)
			{
				this->day = 31;
				this->moth = 12;
				this->year = this->year - 1;
			}
			else
			{
				this->day = this->day - 1;
			}
		}
		else if (this->moth == 3)
		{
			if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
			{
				if (this->day == 1)
				{
					this->day = 29;
					this->moth = 2;
				}
				else
				{
					this->day = this->day - 1;
					this->moth = 3;
				}
			}
			else
			{
				if (this->day == 1)
				{
					this->day = 28;
					this->moth = 2;
				}
				else
				{
					this->day = this->day - 1;
					this->moth = 3;
				}
			}
		}
		else
		{
			if (this->day == 1)
			{
				this->day = 31;
				this->moth = this->moth - 1;
			}
			else
			{
				this->day = this->day - 1;
			}
		}
	}

	return temp;
}
istream& operator>>(istream& is, Date&d)
{
	is >> d.year >> d.moth >> d.day;
	return is;
}
ostream& operator<<(ostream& os, Date d)
{
	os << d.day << "/" << d.moth << "/" << d.year;
	return os;
}

Date::operator int()
{
	int s = 0;
	for (int i = 1; i < moth; i++)
	{
		if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			s = s + 30;
		}
		else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			s = s + 31;
		}
		else if (i == 2)
		{
			if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
			{
				s = s + 29;
			}
			else
			{
				s = s + 28;
			}
		}
	}
	s = s + day - 1;
	return s;
}

Date::operator long()
{
	int s = 0;
	for (int i = 1; i < moth; i++)
	{
		if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			s = s + 30;
		}
		else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			s = s + 31;
		}
		else if (i == 2)
		{
			if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
			{
				s = s + 29;
			}
			else
			{
				s = s + 28;
			}
		}
	}
	s = s + day - 1 + (year - 1) * 365;
	return s;
}

Date& Date::operator+=(int a)
{
	this->day = this->day + a;
	if (this->moth == 4 || this->moth == 6 || this->moth == 9 || this->moth == 11)
	{
		if (this->day > 30)
		{
			this->day = this->day - 30;
			this->moth = this->moth + 1;
		}
	}
	else if (this->moth == 1 || this->moth == 3 || this->moth == 5 || this->moth == 7 || this->moth == 8 || this->moth == 10 || this->moth == 12)
	{
		if (this->moth == 12)
		{
			if (this->day > 31)
			{
				this->day = this->day - 31;
				this->moth = 1;
				this->year = this->year + 1;
			}
		}
		else
		{
			if (this->day > 31)
			{
				this->day = this->day - 31;
				this->moth = this->moth + 1;
			}
		}

	}
	else if (this->moth == 2)
	{
		if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
		{
			if (this->day > 29)
			{
				this->day = this->day - 29;;
				this->moth = 3;
			}
		}
		else
		{
			if (this->day > 28)
			{
				this->day = this->day - 28;
				this->moth = 3;
			}
		}
	}
	return *this;
}
Date& Date::operator-=(int a)
{
	this->day = this->day - a;
	if (this->moth == 4 || this->moth == 6 || this->moth == 9 || this->moth == 11 || this->moth == 2)
	{
		if (this->day < 1)
		{
			this->day = this->day + 31;
			this->moth = this->moth - 1;
		}
	}
	else if (this->moth == 1 || this->moth == 5 || this->moth == 7 || this->moth == 8 || this->moth == 10 || this->moth == 12)
	{
		if (this->moth == 1)
		{
			if (this->day < 1)
			{
				this->day = this->day + 31;
				this->moth = 12;
				this->year = this->year - 1;
			}
		}
		else
		{
			if (this->day < 31)
			{
				this->day = this->day + 31;
				this->moth = this->moth - 1;
			}
		}

	}
	else if (this->moth == 3)
	{
		if ((this->year % 400 == 0) || (this->year % 100 != 0 && this->year % 4 == 0))
		{
			if (this->day < 1)
			{
				this->day = this->day + 29;
				this->moth = 2;
			}
		}
		else
		{
			if (this->day < 1)
			{
				this->day = this->day+ 28;
				this->moth = 2;
			}
		}
	}
	return *this;
}