#pragma once
#include "Menu.h"
class Play :public Menu
{
public:
	Play();
	~Play();
	bool choose = false;
	void SetLocation(float x, float y);
	void Draw1();
	void Draw2();
};

