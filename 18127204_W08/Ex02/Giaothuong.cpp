#include "Giaothuong.h"
void Giaothuong::Input()
{
	cout << "\nNhap don gia:";	cin >> dongia;
	cout << "\nNhap so hang:";	cin >> sohang;
}

int Giaothuong::Result()
{
	return dongia * sohang;
}

Giaothuong::Giaothuong()
{
}


Giaothuong::~Giaothuong()
{
}
