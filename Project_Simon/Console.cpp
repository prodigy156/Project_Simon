#include "Console.h"

Console::Console(int width, int height, FASG::ConsoleFontRatios fontRatio)
{
	FASG::InitConsole(width, height);
	FASG::SetFontSizeRatio(fontRatio);
}

Console::~Console()
{
	FASG::DestroyConsole();
}
