#pragma once
#include "Level.h"
class MenuLevel :public Level
{
public:
	MenuLevel(int width, int height, FASG::ConsoleFontRatios fontRatio);

	~MenuLevel();

	char keyPressed;
	bool turno = false;
	bool choose = false;
	virtual void Update();
	virtual void Render();
	virtual void InitLevel();
	virtual void ProcessInputs();
};

