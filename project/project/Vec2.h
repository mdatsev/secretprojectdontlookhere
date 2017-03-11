#pragma once
class Vec2
{
public:
	float x;
	float y;
	Vec2(float x, float y);
	Vec2();
	~Vec2();
	void operator+=(const Vec2 & v);
	Vec2 operator+(const Vec2 & right);
	Vec2 operator/(const float & right);
};
