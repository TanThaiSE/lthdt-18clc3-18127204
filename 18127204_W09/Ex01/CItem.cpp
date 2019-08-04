#include "CItem.h"
void CItem::add(CItem*)
{

}
CItem* CItem::removeByName(string x)
{
	return NULL;
}
CItem* CItem::findByName(string x)
{
	return NULL;
}
void CItem::print(int x)
{
	cout << "Name:" << name << endl;
	cout << "Hidden:" << hidden << endl;
	cout << "Read only:" << readonly << endl;
}

CItem::CItem()
{
	name = "no name";
	hidden = false;
	readonly = false;
}


CItem::~CItem()
{
}
