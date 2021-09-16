﻿// Experiment2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<map>
#include"Game.h"

int main()
{
    //每回合随机生成僵尸，考虑用容器装僵尸，选择什么容器？multimap 因为它的key升序排列且可以重复
        // 容器要求：强调顺序，便于遍历。。迭代器可以指向容器中的一个位置
        // 注意到Bean最好要自动瞄准目标，因此遍历时应该判断每一路哪个僵尸在bean的前面且离bean最近，然后将pz->GetX传递给bean
        // 其实先出现先被瞄准（瞄准射击有bug）就行，但是为了之后加入速度不同的僵尸，我认为使用multimap比较好，索引值定为pz->GetX
        //还可以用容器装向日葵确定阳光产量
    multimap<double, Obj*> lu1;
    multimap<double, Obj*> lu2;//前面是key，后面是Obj基类的指针
    multimap<double, Obj*> lu3;//如果设定了容器是装基类，可以装继承类吗？用指针试试
    multimap<double, Obj*> lu4;//やってみる
    multimap<double, Obj*> lu5;
    //obj的公有成员是y, x，这样能否将这些成员都装进以上的multimap中？建立副本再试试
    //不是任何类的对象都能作容器元素的。容器的操作特性对该类有门槛要求：
    /*    Ø 可默认（无参的）构造的;已完成
        Ø 可拷贝构造的；
        Ø 可拷贝赋值的；
        Ø 对含有指针或引用的类，必须具有公有的、有深拷贝操作的、显 式 定 义
        过的拷贝构造函数，以及类似的赋值函数，还要有相应的析构函数。*/
    /*欧阳的想法：使用二维数组判断每块地是否已有植物*/
    game();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单