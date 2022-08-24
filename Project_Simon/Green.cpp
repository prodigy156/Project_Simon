#include "Green.h"

Green::Green()
{
}

Green::~Green()
{
}

void Green::SetLocation(float x, float y)
{
	skin2.LoadSprite("Verde2.txt");
	skin1.LoadSprite("Verde.txt");
	skin1.Location.x = x;
	skin1.Location.y = y;

}

void Green::Draw()
{
	//ButtonInput();

	FASG::WriteSpriteBuffer(skin1.Location.x, skin1.Location.y, skin1);
}