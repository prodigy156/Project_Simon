#include "Hard.h"

int Hard::numero = 0;

Hard::Hard()
{
}

Hard::~Hard()
{
}

void Hard::SetLocation(float x, float y)
{
	sprite.Location.x = x;
	sprite.Location.y = y;
	sprite.LoadSprite("hard.txt");
	sprite2.LoadSprite("hard2.txt");
}

void Hard::Draw2()
{
	FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite2);
}


int Hard::GetHard()
{
	return numero;
}

void Hard::SetHard(int const &numero)
{
	this->numero = numero;
}

void Hard::Draw1()
{
	FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite);
}

