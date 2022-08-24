#pragma once
#include "FAriasSimpleGraphics.h"
#include <iostream>
#include <string.h>
#include <conio.h>
#include "ButtonStates.h"
#include "PlayerInput.h"

class Button
{
protected:
	FASG::Sprite skin1, skin2;
	EButtonStates state;
	

public:

	Button();
	~Button();
	virtual void SetLocation(float x, float y);
	virtual void Draw();
};

