#pragma once
#include <iostream>
using namespace std;
void Map_Update(int* map)
{
    for (int i = 0; i < 100; i++)
    {
        switch (map[i])
        {
        case 1:cout << "��"; break;     //ǽ��
        case 0:cout << "  "; break;     //�յ�
        case 2:cout << "Pe"; break;     //��
        case 3:cout << "��"; break;    //����
        case 4:cout << "**"; break;    //����Ŀ�ĵ�
        case 5:cout << "��"; break;    //�����غ�
        case 6:cout << "��"; break;    //�������غ�
        }
        if (i % 10 == 9)
            cout << '\n';
    }
}