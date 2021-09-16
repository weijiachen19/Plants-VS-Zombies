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
        if (xBefore < xMubiao && xMubiao <= xAfter)//��bug����ʹ�ý�ʬ�����㶹��׼��Ŀ�ֻ꣬Ҫ�ӵ������ˣ��Ϳ��Դ��������˺�
            //�ȼ��Bullet���ٿ�����ô��
            //���ܵ�˼·������Ϸ����Ƶ�ʵ��ߣ������û�����Ƶ�ʣ��Ա�������ʵ�ȣ�Ҳ���������㶹������ӵ������߼�����ȷ��
            //֮ǰ���⽫�ٶȺ;�����Ϊdouble�����ó��ˣ�������
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

