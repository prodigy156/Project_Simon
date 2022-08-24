#pragma once
#include <iostream>
#include <Windows.h>
#include "FAriasSimpleGraphics.h"

class GameParams
{
public:
	CONSOLE_FONT_INFOEX cfi;
	void ConsoleFont();
	static int width;
	static int height;
	static FASG::ConsoleFontRatios fontRatio;
	GameParams();
	~GameParams();
};

