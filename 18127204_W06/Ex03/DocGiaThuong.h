#pragma once
#include"DocGiaVIP.h"
class DocGiaThuong:public DocGiaVIP
{
private:
	int sosachmuon;
public:
	void Input();
	void Output();
	int fee();
	DocGiaThuong();
	~DocGiaThuong();
};

