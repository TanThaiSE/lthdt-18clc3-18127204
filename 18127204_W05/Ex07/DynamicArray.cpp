#include "DynamicArray.h"
#include"Tokenizer.h"

DynamicArray::DynamicArray()
{
	len = 0;
}


DynamicArray::~DynamicArray()
{
	
}
DynamicArray::DynamicArray(vector<int> ele, int lent)
{
	len = lent;
	
	for (int i = 0; i < len; i++)
	{
		int num = ele[i];
		a.push_back(num);
	}
}
DynamicArray::DynamicArray(const DynamicArray& x)
{
	len = x.len;
	for (int i = 0; i < len; i++)
	{
		a[i] = x.a[i];
	}
}
istream& operator>>(istream& is, DynamicArray& x)
{
	cout << "Input n:";	
	is >> x.len;

	for (int i = 0; i < x.len; i++)
	{
		cout << "Element" << i << ":";
		int num;
		is >> num;
		x.a.push_back(num);
	}
	return is;
}
string DynamicArray::Tostring()
{
	stringstream write;
	
	for (int i = 0; i < len; i++)
	{
		write << a[i] << " ";
	}
	write << "\n";
	return write.str();
}

//"5, 8, 12, 15, 612, 19"
DynamicArray* DynamicArray::Parse(string s)
{
	vector<string> d = Tokenizer::Parse(s, ",");
	vector<int> number;
	int x = stoi(d[0]);
	number.push_back(x);
	int b = d.size();
	for (int i = 1; i < b; i++)
	{
		d[i] = d[i].substr(1);
	}
	for (int j = 1; j < b; j++)
	{
		int num = stoi(d[j]);
		number.push_back(num);
	}
	DynamicArray *dy = new DynamicArray(number, d.size());
	return dy;
}
void DynamicArray::parse()
{
	string s = "5, 8, 12, 15, 612, 19";
	DynamicArray* dy = DynamicArray::Parse(s);
	cout << dy->Tostring();

}
