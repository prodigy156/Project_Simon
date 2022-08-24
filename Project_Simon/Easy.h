#pragma once
#include "Dificultad.h"

class Easy :public Dificultad
{
public:
	Easy();
	~Easy();

	void SetLocation(float x, float y);
	void Draw1();
	void Draw2();
};

