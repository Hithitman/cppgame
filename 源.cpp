#include<iostream>
#include<conio.h>
#include"Map.h"
#include"Map_updata.h"
#include"player_move.h"
#include"iswin.h"
using namespace std;
int main()
{
	char input;                      //输入常数
	int nowpoint = 31;              //玩家现在的地点
	int shift=0;                      //玩家目标点
	const int w = 10;               //地图宽度
	int map[100];
	Gamer_Map(map);                 //生成地图种子
	Map_Update(map);                //初始化地图
	while (true)
	{
		if (IsWin(map,sizeof(map)/sizeof(int)))
		{
			cout << "过关成功！是否重新开始？(按y同意，按其余任意键退出)" << endl;
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