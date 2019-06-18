#include"DynamicArray.h"
void DynamicArray::input()
{
	cout << "input len:";	cin >> _len;
	_a = new int[_len];
	for (int i = 0; i < _len; i++)
	{
		cin >> _a[i];
	}
}
void DynamicArray::output()
{
	for (int i = 0; i < _len; i++)
	{
		cout << _a[i]<<" ";
	}
}
void DynamicArray::PushBack(int value)
{
	_a[_len] = value;
	_len = _len + 1;
	
}
int DynamicArray::GetAt(int index)
{
	return _a[index];
}

DynamicArray::DynamicArray()
{
	_len = 128;
}
DynamicArray::DynamicArray(int len)
{
	_len = len;
}
DynamicArray::DynamicArray(const DynamicArray& x)
{
	_len = x._len;
	for (int i = 0; i < _len; i++)
	{
		_a[i] = x._a[i];
	}
}

DynamicArray::~DynamicArray()
{
	delete _a;
}