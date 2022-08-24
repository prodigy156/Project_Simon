#pragma once
#include "Button.h"
class Red : public Button
{
public:
	Red();
	~Red();

	virtual void SetLocation(float x, float y);
	virtual void Draw();
};

