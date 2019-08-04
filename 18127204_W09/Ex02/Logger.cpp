#include "Logger.h"

void Logger::Logger_console()
{
	string a;
	cout << "Input function to call";	cin.ignore();	getline(cin, a);
	if (a == name_function)
	{
		cout << thoigian << "-" << name_class << "-" << name_function;
	}
		
}
void Logger::Logger_savefile()
{
	ofstream fout;
	fout.open("C:\\savefile.txt");
	if (!fout.is_open())
		return;
	else
	{
		string a;
		cout << "Input function to call";	cin.ignore();	getline(cin, a);
		if (a == name_function)
		{
			fout << thoigian << "-" << name_class << "-" << name_function;
		}	
	}
	fout.close();
}

Logger::Logger()
{
}


Logger::~Logger()
{
}
