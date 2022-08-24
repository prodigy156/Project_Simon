#pragma once
#include "Dificultad.h"
class Hard :public Dificultad
{
public:
	static int numero;

	Hard();
	~Hard();

	void SetLocation(float x, float y);
	void Draw1();
	void Draw2();
	int GetHard();
	void SetHard(int const &numero);
};