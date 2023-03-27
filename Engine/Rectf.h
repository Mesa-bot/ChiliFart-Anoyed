#pragma once
#include "Vec2.h"

class Rectf 
{
public:
	Rectf() = default;
	Rectf( float left_in,float right_in,float top_in,float bottom_in);
	Rectf(const Vec2& top_left, const Vec2& bottom_right);
	Rectf(const Vec2& top_left, float width, float height);
	bool IsOverlappingWith(const Rectf& other) const;
public:
	float left;
	float top;
	float right;
	float bottom;
};