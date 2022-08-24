#include "Blue.h"

Blue::Blue()
{
}

Blue::~Blue()
{
}

void Blue::SetLocation(float x, float y)
{
	skin2.LoadSprite("Azul2.txt");
	skin1.LoadSprite("Azul.txt");
	skin1.Location.x = x;
	skin1.Location.y = y;

}

void Blue::Draw()
{
	//ButtonInput();

	FASG::WriteSpriteBuffer(skin1.Location.x, skin1.Location.y, skin1);
}