#include "General.h"

void General::input(int val)
{

	srand((int)time(0));
	n = 5 + rand() % (val + 1 - 5);
	x.resize(n);
	for (int i = 0; i < n; i++)
	{
		int g = 1 + rand() % (2 + 1 - 1);
		x.push_back(g);	
	}
}
void General::output(string name)
{
		cout << name << ":" << x.size() << endl;
}

bool General::checksinh(int val)
{
	if (val % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int General::sinh()
{
	int count = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (checksinh(x[i]) == true)
		{
			count++;
		}
	}
	return count;
}
int General::chosua(int val)
{
	int count = 0;
	for (int i = 0; i < x.size(); i++)
	{
		int x = 0 + rand() % (val + 1 - 0);
		count += x;
	}
	return count;
}
void General::keu(string name)
{
	for (int i = 0; i < x.size(); i++)
	{
		cout << name << endl;
	}
}
General::General()
{

}


General::~General()
{

}
