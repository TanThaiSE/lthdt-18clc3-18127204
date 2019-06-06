#pragma once
#include<iostream>
using namespace std;
class IntArray
{
private:
	int n;
	int* ele;
public:
	IntArray();
	IntArray(int);
	IntArray(int a[], int);
	IntArray(const IntArray&);
	IntArray& operator=(IntArray);
	friend istream& operator>>(istream&, IntArray&);
	friend ostream& operator<<(ostream&, IntArray);
	int& operator[](int);
	operator int();
};