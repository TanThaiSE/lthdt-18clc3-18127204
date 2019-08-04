#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Logger
{
private:
	int thoigian;
	string name_class;
	string name_function;
public:
	
	void Logger_console();
	void Logger_savefile();
	Logger();
	~Logger();
};

