#pragma once
#include"Obj.h"
class Bullet:
	public Obj
{
	int attackbility;
	double speed;
public:
	Bullet(double Y=0,int X=0,int at=0,double s=0)
	{
		attackbility = at;
		y = Y;
		x = X;
		speed = s;
	}
	int GetY() { return y; }
	double GetX() { return x; }
	int GetAttackabilyty() { return attackbility; }
	void Fly(double time)
	{
		x += speed*time;//+= 向前发射，双头射手可向后发射
	}
};

