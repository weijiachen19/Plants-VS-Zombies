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
		//��������Ϸ�Լ����У������ʱ����ֶ���
		//�涨���غ�, if(�غϽ����������������ɽ�ʬ�� && ��ʬ�������)���ʤ��
		//һ�󲨽�ʬ���ڼ����ض��غϼӴ�ʬ���ָ���
	{
		system("cls");//��տ���̨��ע�����������
		
		cout << "���Ǻ�ҹģʽ����ע�����⽫��ȫ�����տ��ṩ!!!" << endl;
		cout << "��" << huihe << "���غ�" << endl;

		//������ɽ�ʬ
		srand(time(NULL));
		if (rand() % 3 == 0) 
		{
			srand(time(NULL));
			int r = rand();
			int lu = r % 5 + 1;
			Zombie* pz = new Zombie(180,lu);
			cout << "��ʬ����!!" << endl;
		}
		/*ʹ��z* ptr = new Zombie�������������new��ʬ����Ļ������������Щ��ʬ�Ĳ�ͬ��
			�Ͼ����ǵ�ָ��������ptr����ϣ�����������в�ͬ��ָ��
		
			��������forѭ�����ɣ�Ȼ����ָ�����һ��vector�������棬ͨ��������ȡ��Ӧ�Ľ�ʬ
			Ҳ���Էŵ�map�������棬��ID��������������
			*/

		//�û�����
		cout << "�ִ潩ʬ��" << endl;
		cout << "���⣺" << sunshine<<endl;
		cout << "��Ҫ��ʲôֲ�" << endl;
		int plant;
		cout << "1.���տ���50���⣩  2.˫ͷ���տ���120���⣩  3.�㶹���֣�100���⣩    4.��ǹ���֣�200���⣩   5.����";
		cin >>plant;
		while(plant!=1&&plant!=2&&plant!=3&&plant!=4 && plant != 5)
		{
			cout << "������Ϸ�ֵ����" << endl;
			
			cin >> plant;
		}
		if(plant==5)
		{	
		}
		else
		{
			cout << "���ڵڼ�·��(������1��5��������" << endl;
			int lu=0;
			cin >> lu;
			while (lu != 1 && lu != 2 && lu != 3 && lu != 4 && lu != 5)
			{
				cout << "������Ϸ�ֵ����" << endl;
				cin >> lu;
			}
			int ge=0;
			cout << "�������յ�ڼ���(������1��9������,ÿ��20�ף�" << endl;
			cin >> ge;
			while (ge != 1 && ge != 2 && ge != 3 && ge != 4 && ge != 5 && ge != 6 && ge != 7 && ge != 8 && ge != 9)
			{
				cout << "������Ϸ�ֵ����" << endl;
				cin >> ge;
			}
			//ע��20��һ��ֲ��->GetX()ӦΪ10,30,50֮�� 
			if(ge)//������Ŵ�����ֲ
			{ }
		}
		
	}
	
}

