#pragma once
#include<iostream>
#include<string>
using namespace std;

class DocGiaVIP
{
private:
	string id;
	string name;
	string deadline;
	string gender;
public:
	void Input();
	void Output();
	int fee();	
	DocGiaVIP(string, string, string, string);
	DocGiaVIP();
	~DocGiaVIP();
};

