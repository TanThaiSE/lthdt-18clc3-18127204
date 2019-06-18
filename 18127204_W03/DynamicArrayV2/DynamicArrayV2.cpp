#include"DynamicArray.h"
int main()
{
	DynamicArray c;
	c.input();
	c.output();
	int index, d, e,value;
	cout << "Index:";	cin >> index;
	
	d = c.GetAt(index);
	cout << d;
	cout << "value:";	cin >> value;
	 c.PushBack(value);
	 c.output();
	return 0;
}