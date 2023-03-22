#include "Rectf.h"

Rectf::Rectf(float left_in, float right_in, float top_in, float bottom_in)
	:
	left(left_in),
	right(right_in),
	top(top_in),
	bottom(bottom_in)
{
}

Rectf::Rectf(Vec2 top_left, Vec2 bottom_right)
	:
	Rectf(top_left.x, top_left.y, bottom_right.x, bottom_right.y)
{
}

Rectf::Rectf(Vec2 top_left, float width, float height)
	:
	Rectf(top_left, Vec2(width, height))
{
}
