#include "Red.h"

Red::Red()
{
}

Red::~Red()
{
}

void Red::SetLocation(float x, float y)
{
	skin2.LoadSprite("Rojo2.txt");
	skin1.LoadSprite("Rojo.txt");
	skin1.Location.x = x;
	skin1.Location.y = y;

}

void Red::Draw()
{
	//ButtonInput();

	FASG::WriteSpriteBuffer(skin1.Location.x, skin1.Location.y, skin1);
}