#pragma once
#include "FAriasSimpleGraphics.h"
#include "Time.h"

class TimeEasy: public Time
{
public:
	TimeEasy();
	~TimeEasy();

	bool timeOut = false;
	int time = 50;
	int coolDown = 5;
	void SetLocation(float x, float y);
	void Draw();
	int CoolDown();
	void CoolDown2();
};

