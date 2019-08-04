#pragma once
#include"CItem.h"
#include "CFolder.h"
class CFile:public CItem
{
public:
	vector<CItem*> subItem;
	void add(CItem*);
	CFile();
	CFile(string, int);
	~CFile();
};

