#pragma once
#include "Time.h"
class TimeHard :public Time
{
public:
	bool timeOut = false;
	int time = 20;
	int coolDown = 5;

	TimeHard();
	~TimeHard();

	void SetLocation(float x, float y);
	void Draw();
	int CoolDown();
	void CoolDown2();
};

