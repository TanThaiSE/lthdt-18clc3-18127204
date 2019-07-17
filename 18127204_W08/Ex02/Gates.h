#pragma once
#include"General.h"
#include"Giaothuong.h"
#include"Hocthuat.h"
#include"Sucmanh.h"
#include"Player.h"

class Gates
{
private:
	vector<General*> a;
	
public:
	
	void Input_Gate();
	void StartGame();
	Gates();
	~Gates();
};

