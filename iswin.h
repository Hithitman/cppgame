#pragma once
bool IsWin(int *map,int size)
{
	int num = 0;
	for (int i = 0; i < size; i++)
	{
		if (map[i] == 6) num++;
	}
	if (num == 3) return true;
	else return false;
}