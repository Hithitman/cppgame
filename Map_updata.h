#pragma once
#include <iostream>
using namespace std;
void Map_Update(int* map)
{
    for (int i = 0; i < 100; i++)
    {
        switch (map[i])
        {
        case 1:cout << "□"; break;     //墙壁
        case 0:cout << "  "; break;     //空地
        case 2:cout << "Pe"; break;     //人
        case 3:cout << "■"; break;    //箱子
        case 4:cout << "**"; break;    //箱子目的地
        case 5:cout << "×"; break;    //和人重合
        case 6:cout << "√"; break;    //和箱子重合
        }
        if (i % 10 == 9)
            cout << '\n';
    }
}