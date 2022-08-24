#pragma once
#include "FAriasSimpleGraphics.h"
#include <iostream>
#include "PlayerInput.h"

class Menu
{
protected:

	FASG::Sprite sprite;
	FASG::Sprite sprite2;
public:
	
	Menu();
	~Menu();

	void Draw();
};
