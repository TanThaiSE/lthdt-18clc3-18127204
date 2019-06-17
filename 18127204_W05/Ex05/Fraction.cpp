#include"Fraction.h"
#include"Tokenizer.h"
Fraction::Fraction()
{
	num = 0;
	de = 1;
}
Fraction::Fraction(int x, int y)
{
	num = x;
	de = y;
}
Fraction::Fraction(const Fraction& x)
{
	num = x.num;
	de = x.de;
}
Fraction::~Fraction()
{

}
string Fraction::Tostring()
{
	stringstream write;
	write << num << "/" << de;
	return write.str();
}

//"6/12"
Fraction* Fraction::Parse(string s)
{
	vector<string> f = Tokenizer::Parse(s, "/");
	int x = stoi(f[0]);
	int y = stoi(f[1]);
	Fraction* frac = new Fraction(x, y);
	return frac;
}

void Fraction::parse()
{
	string s = "6/12";
	Fraction* f = Fraction::Parse(s);
	cout << f->Tostring();
}
