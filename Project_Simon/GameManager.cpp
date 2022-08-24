#include "GameManager.h"



void GameManager::game()
{
	while (gameState != EGameStates::GAME_OVER)
	{
		switch (gameState)
		{
		case EGameStates::MENU_LEVEL:
			gameState = menu.Loop();
			break;
		case EGameStates::NORMAL_LEVEL:
			gameState = nLevel.Loop();
			break;
		case EGameStates::HARD_LEVEL:
			gameState = hLevel.Loop();
			break;
		case EGameStates::GAME_OVER:
			gameState = goLevel.Loop();
			break;
		case EGameStates::DIFICULTY_LEVEL:
			gameState = difLevel.Loop();
			break;
		}
	}
}

GameManager::~GameManager()
{
}
