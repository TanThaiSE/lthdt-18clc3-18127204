#include"Fraction.h"
Fraction::Fraction()
{
	this->_num = 0;
	this->_den = 1;
}
Fraction::Fraction(int x, int y)
{
	_num = x;
	_den = y;
}
Fraction::~Fraction()
{

}