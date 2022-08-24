#pragma once
#include "Menu.h"
class Dificultad :public Menu
{
public:
	Dificultad();
	~Dificultad();

	void SetLocation(float x, float y);
	void Draw1();
	void Draw2();
};

