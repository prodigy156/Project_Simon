#include "Level.h"
#include "Console.h"

Level::Level(int width, int height, FASG::ConsoleFontRatios fontRatio)
{
	this->width = width;
	this->height = height;
	this->fontRatio = fontRatio;
}


Level::~Level()
{
}

void Level::ProcessInputs()
{
}

void Level::Update()
{
}

void Level::Render()
{
}

void Level::InitLevel()
{
}

void Level::GameLogic()
{
}

EGameStates Level::Loop()
{
	Console console(width, height, fontRatio);

	InitLevel();

	endLevel = false;

	while (!endLevel)
	{
		ProcessInputs();
		Render();
		Update();
	}

	return nextState;

}

