#include"GmtTime.h"
int main()
{
	GmtTime now;
	cout << now.ToString(7) <<endl;
	GmtTime now1(1, 2, 3);
	cout << now1.ToString(2);
	return 0;
}