#include"Logger.h"
int main()
{
	int x;
	Logger l;
	cout << "Input x:";	cin >> x;
	if (x == 1)
	{
		l.Logger_console();
	}
	else
	{
		l.Logger_savefile();
	}
	return 0;
}