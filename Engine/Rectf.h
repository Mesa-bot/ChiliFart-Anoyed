#pragma once
#include "Vec2.h"


class Rectf 
{
public:
	Rectf() = default;
	Rectf( float left_in,float right_in,float top_in,float bottom_in);
	Rectf(Vec2 top_left, Vec2 bottom_right);
	Rectf(Vec2 top_left, float width, float height);
public:
	float left;
	float top;
	float right;
	float bottom;
};