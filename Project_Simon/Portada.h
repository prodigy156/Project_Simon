#pragma once
#include "Menu.h"
class Portada :public Menu
{
public:
	~Portada();
	Portada();

	void Draw();
	void SetLocation(float x, float y);
};

