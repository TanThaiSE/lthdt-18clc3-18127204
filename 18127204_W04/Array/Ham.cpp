#include"Ham.h"
IntArray::IntArray()
{
	n = 1;
	ele = new int[n];
	ele[0] = 1;
}
IntArray::IntArray(int N)
{
	n = N;
	ele = new int[n];
	for (int i = 0; i < n; i++)
	{
		ele[i] = 1;
	}
}
IntArray::IntArray(int a[], int N)
{
	n = N;
	ele = new int[n];
	for (int i = 0; i < n; i++)
	{
		ele[i] = a[i];
	}

}
IntArray::IntArray(const IntArray& a)
{
	n = a.n;
	ele = new int[a.n];
	for (int i = 0; i < a.n; i++)
	{
		ele[i] = a.ele[i];
	}
}
IntArray& IntArray::operator=(IntArray a)
{
	n = a.n;
	ele = new int[n];
	for (int i = 0; i < a.n; i++)
	{
		ele[i] = a.ele[i];
	}
	return *this;
}
istream& operator>>(istream& is, IntArray& a)
{
	is >> a.n;
	a.ele = new int[a.n];
	for (int i = 0; i < a.n; i++)
	{
		cout << "Input:" << i;
		is >> a.ele[i];
	}
	return is;
}
ostream& operator<<(ostream& os, IntArray a)
{
	os << a.n << endl;
	for (int i = 0; i < a.n; i++)
	{
		os << a.ele[i] << " ";
	}
	cout << endl;
	return os;
}

int& IntArray::operator[](int index)
{
	if (index>=0 && index < n)
	{
		return ele[index];
	}
	else
	{
		throw "Khong hop le";
	}
}
IntArray::operator int()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		dem++;
	}
	return dem;
}