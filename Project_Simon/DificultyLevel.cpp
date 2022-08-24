#include "DificultyLevel.h"

DificultyLevel::DificultyLevel(int width, int height, FASG::ConsoleFontRatios fontRatio) :Level(width, height, fontRatio)
{
	height = 250;
	width = 150;
	this->width = width;
	this->height = height;
}

DificultyLevel::~DificultyLevel()
{
}

void DificultyLevel::Update()
{

	InitLevel();

	while (!endLevel)
	{
		Render();
		FASG::RenderFrame();
	}
}

void DificultyLevel::Render()
{
		ProcessInputs();
		if (keyPressed == 13 && choose == true)
		{
			endLevel = true;
			hard.numero = 1;
			nextState = EGameStates::MENU_LEVEL;
		}
		if ((keyPressed == 13) && (choose == false))
		{
			endLevel = true;
			nextState = EGameStates::MENU_LEVEL;
		}
		else
		{
			if (((keyPressed == 87) || (keyPressed == 119)) && choose == true)
			{
				turno = false;
				choose = false;
			}
			if (((keyPressed == 83) || (keyPressed == 115)) && choose == false)
			{

				choose = true;
				turno = true;
			}
		}
		if (!turno)
		{
			hard.Draw1();
			easy.Draw2();
		}
		else
		{
			hard.Draw2();
			easy.Draw1();
		}
}

void DificultyLevel::InitLevel()
{
	easy.SetLocation(58, 20);
	hard.SetLocation(57, 30);
}

void DificultyLevel::ProcessInputs()
{
	if (_kbhit())
		keyPressed = _getch();

	else
		keyPressed = NULL;

}
