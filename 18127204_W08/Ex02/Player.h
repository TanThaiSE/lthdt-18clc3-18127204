#pragma once
#include"General.h"
class Player
{
private:
	int tien;
	int tritue;
	int sucmanh;
public:
	int get_tien() { return tien; }
	int get_tritue() { return tritue; }
	int get_sucmanh() { return sucmanh; }

	void set_tien(int x) { tien = x; }
	void set_tritue(int y) { tritue = y; }
	void set_sucmanh(int z) { sucmanh = z; }
	void Input_infor();

	Player();
	~Player();
};

