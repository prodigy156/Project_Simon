#include "NormalLevel.h"
#include <iostream>
#include "GameParams.h"

NormalLevel::NormalLevel(int width, int height, FASG::ConsoleFontRatios fontRatio) :Level(width, height, fontRatio)
{

}



NormalLevel::~NormalLevel()
{
}

void NormalLevel::InitLevel()
{
	simon.SetLocation(50, 20);
	red.SetLocation(50, 20);
	blue.SetLocation(50, 20);
	green.SetLocation(50, 20);
	yellow.SetLocation(50, 20);
	time.SetLocation(0, 0);
}

void NormalLevel::ProcessInputs()
{
	if (_kbhit())
		keyPressed = _getch();
	
	else
		keyPressed = NULL;

}

void NormalLevel::Update()
{
	gameOver = false;
	time.timeOut = false;
	consoleFont.ConsoleFont();
	InitLevel();
	generatedButton = false;
	buttonState = EButtonStates::RELEASED;

	while (!gameOver)
	{
		GameLogic();
		Render();
		FASG::RenderFrame();
	}

	//Mandar a la pantalla de gameover
	endLevel = true;
	nextState = EGameStates::GAME_OVER;

}

void NormalLevel::Render()
{
	time.Draw();
	simon.Draw();
	switch (buttonState)
	{
	case EButtonStates::BLUE_PRESSED:
		blue.Draw();
		break;
	case EButtonStates::YELLOW_PRESSED:
		yellow.Draw();
		break;
	case EButtonStates::GREEN_PRESSED:
		green.Draw();
		break;
	case EButtonStates::RED_PRESSED:
		red.Draw();
		break;
	default:
		break;
	}

}

void NormalLevel::GameLogic()
{

	time.CoolDown();

	if (time.coolDown < 0)
	{
		gameOver = true;
		generatedButton = true;
	}
	else
	{
		if (buttonState == EButtonStates::RELEASED && generatedButton == false)
		{
			int randNum = rand() % 4; //random entre 0 y 4

			switch (randNum)
			{
			case 0:
				buttonState = EButtonStates::BLUE_PRESSED;
				break;
			case 1:
				buttonState = EButtonStates::YELLOW_PRESSED;
				break;
			case 2:
				buttonState = EButtonStates::GREEN_PRESSED;
				break;
			case 3:
				buttonState = EButtonStates::RED_PRESSED;
				break;
			default:
				//buttonState = EButtonStates::RELEASED;
				break;
			}
		}

		generatedButton = true; 
		ProcessInputs();

		switch (keyPressed)
		{
		case 52:
			if (buttonState == EButtonStates::BLUE_PRESSED)
			{
				buttonState = EButtonStates::RELEASED;
				generatedButton = false;
				time.coolDown = 5;
			}
			break;
		case 56:
			if (buttonState == EButtonStates::RED_PRESSED)
			{
				buttonState = EButtonStates::RELEASED;
				generatedButton = false;
				time.coolDown = 5;
			}
			break;
		case 54:
			if (buttonState == EButtonStates::GREEN_PRESSED)
			{
				buttonState = EButtonStates::RELEASED;
				generatedButton = false;
				time.coolDown = 5;
			}
			break;
		case 50:
			if (buttonState == EButtonStates::YELLOW_PRESSED)
			{
				buttonState = EButtonStates::RELEASED;
				generatedButton = false;
				time.coolDown = 5;
			}
			break;
		default:
			break;
		}
	}
}
