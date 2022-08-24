#pragma once
#include "GameState.h"
#include "FAriasSimpleGraphics.h"
#include "GameParams.h"
#include "Blue.h"
#include "Red.h"
#include "Green.h"
#include "Yellow.h"
#include "Portada.h"
#include "Play.h"
#include "Dificultad.h"
#include "Easy.h"
#include "Hard.h"
#include "TimeEasy.h"
#include <time.h>
#include "TimeHard.h"
#include "Button.h"
class Level
{
public:
	Level(int width, int height, FASG::ConsoleFontRatios fontRatio);	
	~Level();

	EGameStates Loop();
	Red red;
	Blue blue;
	Green green;
	Yellow yellow;
	Button simon;
	Portada portada;
	Play play;
	Dificultad dificultad;
	Easy easy;
	Hard hard;
	TimeEasy time;
	TimeHard timehard;
	bool generatedButton;
	bool gameOver;

protected:
	int width, height;
	bool showCursor;
	bool endLevel = false;
	FASG::ConsoleFontRatios fontRatio;

	GameParams consoleFont;

	EGameStates nextState;

	virtual void ProcessInputs();
	virtual void Update();
	virtual void Render();
	virtual void InitLevel();
	virtual void GameLogic();
};

