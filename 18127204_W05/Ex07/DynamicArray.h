#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
class DynamicArray
{
private:
	vector<int> a;
	int len;
public:
	string Tostring();
	DynamicArray* Parse(string);
	void parse();
	friend istream& operator>>(istream&, DynamicArray&);
public:
	DynamicArray(vector<int>, int);
	DynamicArray(const DynamicArray&);
	DynamicArray();
	~DynamicArray();
};

