#pragma once
#include "Button.h"

class Blue : public Button
{
public:
	Blue();
	~Blue();

	virtual void SetLocation(float x, float y);
	virtual void Draw();

};

