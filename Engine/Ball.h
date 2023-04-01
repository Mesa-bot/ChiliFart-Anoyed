#pragma once
#include "Vec2.h"
#include "Graphics.h"
#include "SpriteCodex.h"

class Ball
{
public:
	Ball(Vec2 pos_in, Vec2 vel_in);
	void Draw(Graphics& gfx) const;
	void Update(float dt);
	void collidingWithWall();
private:
	Vec2 pos;
	Vec2 vel;
};
