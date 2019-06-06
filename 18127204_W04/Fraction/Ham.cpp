#include"Ham.h"
Fraction& Fraction::operator=(Fraction p)
{
	this->nu = p.nu;
	this->de = p.de;
	return *this;
}

Fraction Fraction::operator+(Fraction p)
{
	Fraction a;
	a.nu = this->nu * p.de + this->de * p.nu;
	a.de = this->de * p.de;
	return a;
}
Fraction Fraction::operator-(Fraction p)
{
	Fraction a;
	a.nu = this->nu * p.de - this->de * p.nu;
	a.de = this->de * p.de;
	return a;
}

Fraction Fraction::operator*(Fraction p)
{
	Fraction a;
	a.nu = this->nu * p.nu;
	a.de = this->de * p.de;
	return a;
}
Fraction Fraction::operator/(Fraction p)
{
	Fraction a;
	a.nu = this->nu * p.de;
	a.de = this->de * p.nu;
	return a;
}

bool Fraction::operator==(Fraction p)
{
	double a = 1.0 * this->nu / this->de;
	double b = 1.0 * p.nu / p.de;
	if (a == b)
	{
		return true;
	}
}
bool Fraction::operator!=(Fraction p)
{
	double a = 1.0 * this->nu / this->de;
	double b = 1.0 * p.nu / p.de;
	if (a != b)
	{
		return true;
	}
}
bool Fraction::operator>=(Fraction p)
{
	double a = 1.0 * this->nu / this->de;
	double b = 1.0 * p.nu / p.de;
	if (a >= b)
	{
		return true;
	}
}
bool Fraction::operator>(Fraction p)
{
	double a = 1.0 * this->nu / this->de;
	double b = 1.0 * p.nu / p.de;
	if (a > b)
	{
		return true;
	}
}
bool Fraction::operator<=(Fraction p)
{
	double a = 1.0 * this->nu / this->de;
	double b = 1.0 * p.nu / p.de;
	if (a <= b)
	{
		return true;
	}
}

bool Fraction::operator<(Fraction p)
{
	double a = 1.0 * this->nu / this->de;
	double b = 1.0 * p.nu / p.de;
	if (a < b)
	{
		return true;
	}
}
istream& operator>>(istream& is, Fraction& p)
{
	is >> p.nu >> p.de;
	return is;
}
ostream& operator<<(ostream& os, Fraction p)
{
	os << p.nu << "/" << p.de;
	return os;
}
Fraction& Fraction::operator+=(Fraction p)
{
	this->nu = this->nu * p.de + this->de * p.nu;
	this->de = this->de * p.de;
	return *this;
}
Fraction& Fraction::operator-=(Fraction p)
{
	this->nu = this->nu * p.de - this->de * p.nu;
	this->de = this->de * p.de;
	return *this;
}
Fraction& Fraction::operator*=(Fraction p)
{
	this->nu = this->nu * p.nu;
	this->de = this->de * p.de;
	return *this;
}
Fraction Fraction::operator+(int a)
{
	Fraction d;
	d.nu = this->nu + a * this->de;
	return d;
}

Fraction operator+(int a, Fraction p)
{
	Fraction d;
	d.nu = a * p.de + p.nu;
	return d;
}


Fraction operator*(int a, Fraction p)
{
	Fraction d;
	d.nu = a *p.nu;
	return d;
}
Fraction Fraction::operator-(int a)
{
	Fraction d;
	d.nu = this->nu - a * this->de;
	return d;
}
Fraction& Fraction::operator/=(Fraction p)
{
	this->nu = this->nu * p.de;
	this->de = this->de * p.nu;
	return *this;
}

Fraction& Fraction::operator++()
{
	this->nu = this->nu + this->de;
	return *this;
}
Fraction Fraction::operator++(int x)
{
	Fraction temp = *this;
	this->nu = this->nu + this->de;
	return temp;
}
Fraction& Fraction::operator--()
{
	this->nu = this->nu - this->de;
	return *this;
}
Fraction Fraction::operator--(int x)
{
	Fraction temp = *this;
	this->nu = this->nu - this->de;
	return temp;
}
Fraction::operator float()
{
	float a;
	a = this->nu * 1.0 / this->de;
	return a;
}
Fraction::Fraction()
{
	this->nu = 0;
	this->de = 1;
}
Fraction::Fraction(int Num, int De)
{
	this->nu = Num;
	this->de = De;
}
Fraction::Fraction(const Fraction& p)
{
	this->nu = p.nu;
	this->de = p.de;
	
}
Fraction::~Fraction()
{

}
