#include "CFile.h"

CFile::CFile(string a, int b)
{
	name = a;
	size = b;
}
void CFile::add(CItem* itemp)
{
	subItem.push_back(itemp);
}

CFile::CFile()
{
}


CFile::~CFile()
{
}
