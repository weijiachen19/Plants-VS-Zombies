#pragma once
#include<iostream>
#include"Obj.h"
class Zombie :
    public Obj
{
public:
    Zombie(double X=0,int Y=0,double spee = 20,int lif = 1100,int attackabilit = 100)
    {
        x = X;
        y = Y;
        speed = spee;
        life = lif;
        attackability = attackabilit;
    }
    int GetLife(void)
    {
        return life;
    };
    double GetSpeed()
    {
        return speed;
    };
    double GetX()
    {
        return x;
    };
    int GetY() { return y; }
    int GetAttackability() { return attackability; }
    void JianLife(int j)
    {
        life -= j;
        if (life < 0) life = 0;
    }
    void Walk(double time)
    {
        x -= speed*time;
        //if (x < 0) x = 0;//这句话再斟酌，或许可以不要，在game.h中体现
        //if (x < 0) std::cout << "Zombie wins!" << std::endl;
    }

private:
    
    double speed;
    int life;
    int attackability;
    
};