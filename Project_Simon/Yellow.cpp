#include "Yellow.h"

Yellow::Yellow()
{
}

Yellow::~Yellow()
{
}

void Yellow::SetLocation(float x, float y)
{
	skin2.LoadSprite("Amarillo2.txt");
	skin1.LoadSprite("Amarillo.txt");
	skin1.Location.x = x;
	skin1.Location.y = y;

}

void Yellow::Draw()
{
	//ButtonInput();

	FASG::WriteSpriteBuffer(skin1.Location.x, skin1.Location.y, skin1);
}