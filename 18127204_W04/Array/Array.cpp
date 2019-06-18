#include"Ham.h"
int main()
{
	// Using dynamic allocated array
	IntArray m1;
	cout << m1;
	IntArray m2(7);
	cout << m2 << endl;
	int a[100];
	int n = 7;
	for (int i = 0; i < n; i++)
	{
		a[i] = i * 2 / 7;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	IntArray m3(a, n);
	cout << endl << m3;
	IntArray m4(m2);
	IntArray m5;
	m5 = m2;

	cin >> m2;
	cout << m2;

	
	try
	{
		
		cout << m3[7];
		m3[7] = 1;
	}
	catch (const char* exception)
	{
		cerr << exception << endl;
	}

	cout << (int)m4;
	return 0;
}