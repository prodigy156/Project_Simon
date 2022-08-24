#include "Portada.h"
void Portada::SetLocation(float x, float y)
{
	sprite.LoadSprite("Menu_Simon.txt");
	sprite.Location.x = x;
	sprite.Location.y = y;
}

Portada::~Portada()
{
}

Portada::Portada()
{
}

void Portada::Draw()
{
	FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite);
}	
