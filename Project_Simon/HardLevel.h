#pragma once
#include "Level.h"
#include "ButtonStates.h"

class HardLevel :public Level
{
public:
	HardLevel(int width, int height, FASG::ConsoleFontRatios fontRatio);
	~HardLevel();

protected:
	char keyPressed;
	EButtonStates buttonState;
	virtual void ProcessInputs();
	virtual void Update();
	virtual void Render();
	virtual void GameLogic();
	virtual void InitLevel();

};

