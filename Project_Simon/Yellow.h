#pragma once
#include "Button.h"
class Yellow : public Button
{
public:
	Yellow();
	~Yellow();
	virtual void SetLocation(float x, float y);
	virtual void Draw();
};

