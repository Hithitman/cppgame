#include<iostream>
#include<conio.h>
#include"Map.h"
#include"Map_updata.h"
#include"player_move.h"
#include"iswin.h"
using namespace std;
int main()
{
	char input;                      //���볣��
	int nowpoint = 31;              //������ڵĵص�
	int shift=0;                      //���Ŀ���
	const int w = 10;               //��ͼ���
	int map[100];
	Gamer_Map(map);                 //���ɵ�ͼ����
	Map_Update(map);                //��ʼ����ͼ
	while (true)
	{
		if (IsWin(map,sizeof(map)/sizeof(int)))
		{
			cout << "���سɹ����Ƿ����¿�ʼ��(��yͬ�⣬������������˳�)" << endl;
			input = _getch();
			if (input == 'y')
			{
				system("cls");
				Gamer_Map(map);
				Map_Update(map);
				nowpoint = 31;
			}
			else return 0;
		}
		input = _getch();
		if (input == 'w')
		{
			up(shift, map, nowpoint, w);
			system("cls");
			Map_Update(map);
		}
		else if (input == 's')
		{
			down(shift, map, nowpoint, w);
			system("cls");
			Map_Update(map);
		}
		else if (input == 'a')
		{
			left(shift, map, nowpoint, w);
			system("cls");
			Map_Update(map);

		}
		else if (input == 'd')
		{
			right(shift, map, nowpoint, w);
			system("cls");
			Map_Update(map);
		}


	}

	return 0;

}