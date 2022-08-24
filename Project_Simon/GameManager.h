#pragma once
#include <iostream>
#include "FAriasSimpleGraphics.h"
#include "Button.h"
#include "GameParams.h"
#include "Red.h"
#include "Blue.h"
#include "Green.h"
#include "GameState.h"
#include "Console.h"
#include "NormalLevel.h"
#include "HardLevel.h"
#include "MenuLevel.h"
#include "GameOverLevel.h"
#include "DificultyLevel.h"
class GameManager
{
public:

	MenuLevel menu = MenuLevel(GameParams::width, GameParams::height, GameParams::fontRatio);
	NormalLevel nLevel = NormalLevel(GameParams::width, GameParams::height, GameParams::fontRatio);
	HardLevel hLevel = HardLevel(GameParams::width, GameParams::height, GameParams::fontRatio);
	GameOverLevel goLevel = GameOverLevel(GameParams::width, GameParams::height, GameParams::fontRatio);
	DificultyLevel difLevel = DificultyLevel(GameParams::width, GameParams::height, GameParams::fontRatio);

	EGameStates gameState;

	void game();
	__forceinline GameManager() { gameState = EGameStates::MENU_LEVEL; } //Aqui es decideix quin nivell esta el jugador
	~GameManager();

};

