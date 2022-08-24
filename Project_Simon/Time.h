#pragma once
#include "FAriasSimpleGraphics.h"

class Time
{
protected:
	FASG::Sprite sprite, sprite1, sprite2, sprite3, sprite4, sprite5;

public:
	Time();
	~Time();

	void SetLocation(float x, float y);
	void Draw();
	int CoolDown();
	void CoolDown2();
};

