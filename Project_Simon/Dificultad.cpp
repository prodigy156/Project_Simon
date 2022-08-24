#include "Dificultad.h"

Dificultad::Dificultad()
{
}

Dificultad::~Dificultad()
{
}

void Dificultad::SetLocation(float x, float y)
{
	sprite.Location.x = x;
	sprite.Location.y = y;
	sprite.LoadSprite("Dificultad.txt");
	sprite2.LoadSprite("Dificultad2.txt");
}

void Dificultad::Draw2()
{
	FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite2);
}

void Dificultad::Draw1()
{
	FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite);
}

