#include "Play.h"


Play::Play()
{
}

Play::~Play()
{
}

void Play::SetLocation(float x, float y)
{
		sprite.Location.x = x;
		sprite.Location.y = y;
		sprite2.LoadSprite("Play2.txt");
		sprite.LoadSprite("Play.txt");

}

void Play::Draw1()
{
	FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite);
}

void Play::Draw2()
{
	FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite2);
}
