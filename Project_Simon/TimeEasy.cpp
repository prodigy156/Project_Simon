#include "TimeEasy.h"



TimeEasy::TimeEasy()
{
}

TimeEasy::~TimeEasy()
{
}

void TimeEasy::SetLocation(float x, float y)
{
	sprite.LoadSprite("Tiempo0.txt");
	sprite1.LoadSprite("Tiempo1.txt");
	sprite2.LoadSprite("Tiempo2.txt");
	sprite3.LoadSprite("Tiempo3.txt");
	sprite4.LoadSprite("Tiempo4.txt");
	sprite5.LoadSprite("Tiempo5.txt");
	sprite.Location.x = x;
	sprite.Location.y = y;
}

void TimeEasy::Draw()
{
	switch (CoolDown())
	{
	case 5:
		FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite5);
		break;
	case 4:
		FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite4);

		break;
	case 3:
		FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite3);

		break;
	case 2:
		FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite2);

		break;
	case 1:
		FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite1);
		break;
	default:
		FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite);
		break;
	}
}

int TimeEasy::CoolDown()
{
	CoolDown2();
	if (time == 0)
	{
		coolDown--;
		time = 50;
	}

	return coolDown;
}

void TimeEasy::CoolDown2()
{
	time--;
}