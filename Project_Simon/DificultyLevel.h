#pragma once
#include "Level.h"
class DificultyLevel :public Level
{
public:
	DificultyLevel(int width, int height, FASG::ConsoleFontRatios fontRatio);
	~DificultyLevel();
protected:
	char keyPressed;
	bool turno = false;
	bool choose = false;
	virtual void Update();
	virtual void Render();
	virtual void InitLevel();
	virtual void ProcessInputs();
};

