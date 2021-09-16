#pragma once
#include "Kui.h"
class TwoHeadKui :
    public Kui
{
    int sunBility=40;
public:
    TwoHeadKui(int Y=0, double X=0,int cost=120,int life=300)
        :Kui(Y, X, cost, life)
    {}
    virtual int  GetSunBility() { return sunBility; }
    
};

