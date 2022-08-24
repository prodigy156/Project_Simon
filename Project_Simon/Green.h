#pragma once
#include "Button.h"
class Green : public Button
{
public:
	Green();
	~Green();

	virtual void SetLocation(float x, float y);
	virtual void Draw();
};

