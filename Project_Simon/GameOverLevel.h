#pragma once
#include "Level.h"
class GameOverLevel :public Level
{
public:
	GameOverLevel(int width, int height, FASG::ConsoleFontRatios fontRatio);
	~GameOverLevel();
protected:
	virtual void ProcessInputs();
	virtual void Update();
	virtual void Render();
};

