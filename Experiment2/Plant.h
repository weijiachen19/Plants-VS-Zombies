#pragma once
#include<iostream>
#include"Obj.h"
class Plant:
    public Obj
{
public:
    Plant(int Y=0, double X=0,int cos=0,int lif=0)
    {
        cost = cos;
        life = lif;
        x = X;
        y = Y;
    }
    int GetY() { return y; }
    double GetX() { return x; }
    void GetPlace()
    {
        std::cout << "第" << y << "路，距离门口" << x << "米" << std::endl;
    }
    int GetCost()
    {
        return cost;
    }
    
    int GetLife() { return life; }
    void JianLife(int j)
    {
        life -= j;
        if (life < 0) life = 0;
    }
private:
    int cost;
    
    int life;

};