#pragma once
#include "Plant.h"
class Kui :
    public Plant
    
{
    int sunbility=20;

public://���캯���ļ̳�
    
    Kui(int Y=0, double X=0,int cost=50,int life=300)
        :Plant(Y, X, cost, life)
    {}
    virtual int GetSunBility() { return sunbility; }
    
};