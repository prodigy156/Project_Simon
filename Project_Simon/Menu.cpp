#include "Menu.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::Draw()
{
	FASG::WriteSpriteBuffer(sprite.Location.x, sprite.Location.y, sprite);

}