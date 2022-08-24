#include "GameParams.h"

void GameParams::ConsoleFont()
{
	cfi.cbSize = sizeof(cfi);
	cfi.dwFontSize.X = 6;
	cfi.dwFontSize.Y = 6;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}

GameParams::GameParams()
{
}

GameParams::~GameParams()
{
}

int GameParams::width = 1000;
int GameParams::height = 150;
FASG::ConsoleFontRatios GameParams::fontRatio = FASG::ConsoleFontRatios::_12x16;
