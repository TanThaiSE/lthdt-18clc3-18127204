#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class CItem
{
protected:
	string name;
	int size;
	bool hidden;
	bool readonly;
public:
	bool get_hidden() { return hidden; }
	string get_name() { return name; }
	virtual CItem* removeByName(string);
	virtual CItem* findByName(string);
	virtual void add(CItem*);
	void print(int);
	virtual void setHidden(bool, bool);
	CItem();
	~CItem();
};

