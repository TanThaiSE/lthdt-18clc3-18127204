#pragma once
#include"CItem.h"
#include"CFile.h"
class CFolder:public CItem
{
public:
	vector<CItem*> subItems;
	void add(CItem*);
	void print(int);
	CItem* removeByName(string);
	CItem* findByName(string);
	void setHidden(bool, bool);
public:

	CFolder();
	CFolder(string);
	~CFolder();
};

