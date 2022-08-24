#include "MenuLevel.h"

MenuLevel::MenuLevel(int width, int height, FASG::ConsoleFontRatios fontRatio) : Level(width, height, fontRatio)
{
	height = 60;
	width = 150;
	this->width = width; 
	this->height = height;
}


MenuLevel::~MenuLevel()
{
}

void MenuLevel::Update()
{
	endLevel = false;

	InitLevel();

	while (!endLevel)
	{
		Render();
		FASG::RenderFrame();
	}
	
}

void MenuLevel::Render()
{	
	portada.Draw();
	ProcessInputs();
	if (keyPressed == 13 && choose == true)
	{
		endLevel = true;
		nextState = EGameStates::DIFICULTY_LEVEL;
	}
	if ((keyPressed == 13) && (choose == false))
	{
		endLevel = true;
		if(hard.numero == 1)
			nextState = EGameStates::HARD_LEVEL;
		else
			nextState = EGameStates::NORMAL_LEVEL;
	}
	else
	{
		if (((keyPressed == 87) || (keyPressed == 119)) && choose == true)
		{
			turno = false;
			choose = false;
		}
			if (((keyPressed == 83)||(keyPressed == 115)) && choose == false)
		{
			
			choose = true;
			turno = true;
		}
	}
	if (!turno)
	{
		dificultad.Draw1();
		play.Draw2();
	}
	else
	{
		dificultad.Draw2();
		play.Draw1();
	}
}

void MenuLevel::InitLevel()
{
	portada.SetLocation(40,5);
	play.SetLocation(58, 30);
	dificultad.SetLocation(54, 40);

}

void MenuLevel::ProcessInputs()
{
	if (_kbhit())
		keyPressed = _getch();

	else
		keyPressed = NULL;

}

