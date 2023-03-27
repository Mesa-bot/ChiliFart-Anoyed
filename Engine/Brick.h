#pragma once
#include "Rectf.h"
#include "Colors.h"
#include "Graphics.h"
class Brick 
{
public:
	Brick(const Rectf& rect_in, Color color_in);
	void draw(Graphics& gfx) const;
private:
	Rectf rect;
	Color color;
	bool destroyed = false;
};