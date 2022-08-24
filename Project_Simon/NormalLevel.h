#pragma once
#include "Level.h"
#include "ButtonStates.h"
class NormalLevel :public Level
{
public:
	NormalLevel(int width, int height, FASG::ConsoleFontRatios fontRatio);

	NormalLevel();
	~NormalLevel();

	char keyPressed;
	EButtonStates buttonState;
	virtual void InitLevel();
	virtual void ProcessInputs();
	virtual void Update();
	virtual void Render();
	virtual void GameLogic();
};

