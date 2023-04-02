#include "Ball.h"

Ball::Ball(Vec2 pos_in, Vec2 vel_in)
	:
	pos(pos_in),
	vel(vel_in)
{
}

void Ball::Draw(Graphics & gfx) const
{
	SpriteCodex::DrawBall(pos, gfx);
}

void Ball::Update(float dt)
{
	pos += vel * dt;
}

bool Ball::collidingWithWall()
{
	bool collided = false;
	int offset = 7;
	if (pos.x - offset <= 0)
	{
		pos.x = pos.x + offset;
		vel.x = -vel.x;
		collided = true;
	}
	else if (pos.x + offset >= Graphics::ScreenWidth)
	{
		pos.x = pos.x - offset;
		vel.x = -vel.x;
		collided = true;
	}

	if (pos.y - offset <= 0)
	{
		pos.y = pos.y + offset;
		vel.y = -vel.y;
		collided = true;
	}
	else if (pos.y + offset >= Graphics::ScreenHeight)
	{
		pos.y = pos.y - offset;
		vel.y = -vel.y;
		collided = true;
	}

	return collided;
}


