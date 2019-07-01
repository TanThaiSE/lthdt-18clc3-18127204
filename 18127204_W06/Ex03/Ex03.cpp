#include"DocGiaThuong.h"
#include"DocGiaVIP.h"
int main()
{
	DocGiaThuong a;
	a.Input();
	a.Output();
	cout << "\nPhi doc gia Thuong:" << a.fee();
	DocGiaVIP b;
	b.Input();
	b.Output();
	cout << "\nPhi doc gia VIP:" << b.fee();
	return 0;
}