#pragma once
#include "Bean.h"
class MGBean :
    public Bean
{
    
    MGBean(int Y=0, double X=0, int cost = 200, int life = 500)
        :Bean(Y,X, cost, life)
    {}
    virtual int Shoot(double xMubiao)
    {
        Bullet* pBullet = new Bullet(GetY(), GetX(), 50, 100);
        double xBefore = pBullet->GetX();
        pBullet->Fly(1);
        double xAfter = pBullet->GetX();
        if (xBefore < xMubiao && xMubiao <= xAfter)//有bug，即使该僵尸不是豌豆瞄准的目标，只要子弹碰到了，就可以触发命中伤害
            //先检查Bullet类再看看怎么搞
            //可能的思路：把游戏运行频率调高，高于用户操作频率，以便增加真实度，也便于增加豌豆发射和子弹命中逻辑的正确性
            //之前特意将速度和距离设为double派上用场了！！！！
        {
            return pBullet->GetAttackabilyty();
            delete pBullet;
        }
        else if (pBullet->GetX() > 180)
        {
            return 0;
            delete pBullet;
        }
    }
};

