#pragma once
#include"Kui.h"
#include"Bean.h"
#include"TwoHeadKui.h"
#include"MGBean.h"
#include "Zombie.h"
#include <cstdlib>
#include<ctime>
using namespace std;
void game()
{
	int sunshine = 50;
	for(int huihe=1;huihe<=500;huihe++)
		//考虑让游戏自己运行，玩家随时打断种东西
		//规定最大回合, if(回合结束（结束后不再生成僵尸） && 僵尸容器清空)玩家胜利
		//一大波僵尸：在几个特定回合加大僵尸出现概率
	{
		system("cls");//清空控制台，注意是清空所有
		
		cout << "这是黑夜模式，请注意阳光将完全由向日葵提供!!!" << endl;
		cout << "第" << huihe << "个回合" << endl;

		//随机生成僵尸
		srand(time(NULL));
		if (rand() % 3 == 0) 
		{
			srand(time(NULL));
			int r = rand();
			int lu = r % 5 + 1;
			Zombie* pz = new Zombie(180,lu);
			cout << "僵尸出现!!" << endl;
		}
		/*使用z* ptr = new Zombie结合随机数来随机new僵尸对象的话，如何体现这些僵尸的不同？
			毕竟它们的指针名都是ptr，我希望它们有能有不同的指针
		
			可以先用for循环生成，然后将其指针放在一个vector容器里面，通过索引来取对应的僵尸
			也可以放到map容器里面，用ID或名字做索引。
			*/

		//用户操作
		cout << "现存僵尸：" << endl;
		cout << "阳光：" << sunshine<<endl;
		cout << "您要种什么植物？" << endl;
		int plant;
		cout << "1.向日葵（50阳光）  2.双头向日葵（120阳光）  3.豌豆射手（100阳光）    4.机枪射手（200阳光）   5.不种";
		cin >>plant;
		while(plant!=1&&plant!=2&&plant!=3&&plant!=4 && plant != 5)
		{
			cout << "请输入合法值！！" << endl;
			
			cin >> plant;
		}
		if(plant==5)
		{	
		}
		else
		{
			cout << "种在第几路？(请输入1到5的整数）" << endl;
			int lu=0;
			cin >> lu;
			while (lu != 1 && lu != 2 && lu != 3 && lu != 4 && lu != 5)
			{
				cout << "请输入合法值！！" << endl;
				cin >> lu;
			}
			int ge=0;
			cout << "种在离终点第几格？(请输入1到9的整数,每格20米）" << endl;
			cin >> ge;
			while (ge != 1 && ge != 2 && ge != 3 && ge != 4 && ge != 5 && ge != 6 && ge != 7 && ge != 8 && ge != 9)
			{
				cout << "请输入合法值！！" << endl;
				cin >> ge;
			}
			//注意20米一格，植物->GetX()应为10,30,50之类 
			if(ge)//有输入才触发种植
			{ }
		}
		
	}
	
}

