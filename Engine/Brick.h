#pragma once
#include "Rectf.h"
#include "Colors.h"
#include "Graphics.h"
class Brick 
{
public:
	Brick(Rectf rect_in, Color c_in);
	void draw(Graphics& gfx) const;
private:
	Rectf rect;
	Color c;
	bool destroyed = false;
};