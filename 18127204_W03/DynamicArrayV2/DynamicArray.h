#pragma once
#include<iostream>
using namespace std;
class DynamicArray
{
private:
	const int INITIAL_SIZE = 128;
private:
	int* _a;
	int _len;
	int _max;
public:
	void input();
	void output();
	void PushBack(int value);
	int GetAt(int index);
	
	DynamicArray();
	DynamicArray(int len);
	DynamicArray(const DynamicArray&);
	~DynamicArray();
};