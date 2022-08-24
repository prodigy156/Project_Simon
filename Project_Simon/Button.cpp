#include "Button.h"



Button::Button()
{
}

Button::~Button()
{
}

void Button::SetLocation(float x, float y)
{
	skin1.Location.x = x;
	skin1.Location.y = y;
	skin1.LoadSprite("Simon.txt");
}


void Button::Draw()
{
	FASG::WriteSpriteBuffer(skin1.Location.x, skin1.Location.y, skin1);
}

