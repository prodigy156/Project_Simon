#include "Easy.h"

Easy::Easy()
{
}

Easy::~Easy()
{
}

void Easy::SetLocation(float x, float y)
{
	sprite.Location.x = x;
	sprite.Location.y = y;
	sprite2.LoadSprite("easy2.txt");
	sprite.LoadSprite("easy.txt");

}

void Easy::Draw2()
{
	FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite2);
}


void Easy::Draw1()
{
	FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite);
}

