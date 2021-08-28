#pragma once
void up(int &shift, int* map,int &nowpoint,const int w)
{ 
	shift = map[nowpoint - w];
	if (shift == 0)
	{
		if (map[nowpoint] == 5)
		{
			map[nowpoint - w] = 2;
			map[nowpoint] = 4;
			nowpoint -= w;
		}
		else
		{
			map[nowpoint - w] = map[nowpoint];
			map[nowpoint] = shift;
			nowpoint -= w;
		}
	}
	else if (shift == 4)
	{
		map[nowpoint - w] = 5;
		map[nowpoint] = 0;
		nowpoint -= w;
	}
	else if (shift == 3)
	{
		if (map[nowpoint] == 5)
		{
			if (map[nowpoint-2*w] == 0)
			{
				map[nowpoint - w] = 2;
				map[nowpoint] = 4;
				map[nowpoint - 2 * w] = 3;
				nowpoint -= w;
				
			}
			else if (map[nowpoint - 2 * w] == 4)
			{
				map[nowpoint - w] = 2;
				map[nowpoint] = 4;
				map[nowpoint - 2 * w] =6;
				nowpoint -= w;
				
			}
		}
		else
		{
			if (map[nowpoint - 2 * w] == 0)
			{
				map[nowpoint - w] = map[nowpoint];
				map[nowpoint] = 0;
				map[nowpoint - 2 * w] = 3;
				nowpoint -= w;
				
			}
			else if (map[nowpoint - 2 * w] == 4)
			{
				map[nowpoint - w] = map[nowpoint];
				map[nowpoint] = 0;
				map[nowpoint - 2 * w] = 6;
				nowpoint -= w;
				
			}
			
		}

	}
		
	
}
void down(int& shift, int* map, int& nowpoint, const int w)
{
	shift = map[nowpoint + w];
	if (shift == 0)
	{
		if (map[nowpoint] == 5)
		{
			map[nowpoint + w] = 2;
			map[nowpoint] = 4;
			nowpoint += w;
		}
		else
		{
			map[nowpoint + w] = map[nowpoint];
			map[nowpoint] = shift;
			nowpoint += w;
		}
	}
	else if (shift == 4)
	{
		map[nowpoint + w] = 5;
		map[nowpoint] = 0;
		nowpoint += w;
	}
	else if (shift == 3)
	{
		if (map[nowpoint] == 5)
		{
			if (map[nowpoint +2 * w] == 0)
			{
				map[nowpoint + w] = 2;
				map[nowpoint] = 4;
				map[nowpoint + 2 * w] = 3;
				nowpoint += w;

			}
			else if (map[nowpoint + 2 * w] == 4)
			{
				map[nowpoint +w] = 2;
				map[nowpoint] = 4;
				map[nowpoint + 2 * w] = 6;
				nowpoint += w;

			}
		}
		else
		{
			if (map[nowpoint + 2 * w] == 0)
			{
				map[nowpoint + w] = map[nowpoint];
				map[nowpoint] = 0;
				map[nowpoint + 2 * w] = 3;
				nowpoint += w;

			}
			else if (map[nowpoint + 2 * w] == 4)
			{
				map[nowpoint + w] = map[nowpoint];
				map[nowpoint] = 0;
				map[nowpoint + 2 * w] = 6;
				nowpoint += w;

			}

		}

	}
}
void left(int& shift, int* map, int& nowpoint, const int w)
{
	shift = map[nowpoint - 1];
	if (shift == 0)
	{
		if (map[nowpoint] == 5)
		{
			map[nowpoint - 1] = 2;
			map[nowpoint] = 4;
			nowpoint -= 1;
		}
		else
		{
			map[nowpoint - 1] = map[nowpoint];
			map[nowpoint] = shift;
			nowpoint -= 1;
		}
	}
	else if (shift == 4)
	{
		map[nowpoint - 1] = 5;
		map[nowpoint] = 0;
		nowpoint -= 1;
	}
	else if (shift == 3)
	{
		if (map[nowpoint] == 5)
		{
			if (map[nowpoint - 2] == 0)
			{
				map[nowpoint - 1] = 2;
				map[nowpoint] = 4;
				map[nowpoint - 2 ] = 3;
				nowpoint -= 1;

			}
			else if (map[nowpoint - 2 ] == 4)
			{
				map[nowpoint - 1] = 2;
				map[nowpoint] = 4;
				map[nowpoint - 2 ] = 6;
				nowpoint -= 1;

			}
		}
		else
		{
			if (map[nowpoint - 2 ] == 0)
			{
				map[nowpoint - 1] = map[nowpoint];
				map[nowpoint] = 0;
				map[nowpoint - 2 ] = 3;
				nowpoint -= 1;

			}
			else if (map[nowpoint - 2] == 4)
			{
				map[nowpoint - 1] = map[nowpoint];
				map[nowpoint] = 0;
				map[nowpoint - 2 ] = 6;
				nowpoint -= 1;

			}

		}

	}
	
	
}
void right(int& shift, int* map, int& nowpoint, const int w)
{
	shift = map[nowpoint + 1];
	if (shift == 0)
	{
		if (map[nowpoint] == 5)
		{
			map[nowpoint + 1] = 2;
			map[nowpoint] = 4;
			nowpoint +=1;
		}
		else
		{
			map[nowpoint + 1] = map[nowpoint];
			map[nowpoint] = shift;
			nowpoint += 1;
		}
	}
	else if (shift == 4)
	{
		map[nowpoint + 1] = 5;
		map[nowpoint] = 0;
		nowpoint += 1;
	}
	else if (shift == 3)
	{
		if (map[nowpoint] == 5)
		{
			if (map[nowpoint + 2 ] == 0)
			{
				map[nowpoint +1] = 2;
				map[nowpoint] = 4;
				map[nowpoint +2] = 3;
				nowpoint += 1;

			}
			else if (map[nowpoint +2] == 4)
			{
				map[nowpoint +1] = 2;
				map[nowpoint] = 4;
				map[nowpoint +2] = 6;
				nowpoint += 1;

			}
		}
		else
		{
			if (map[nowpoint +2] == 0)
			{
				map[nowpoint +1] = map[nowpoint];
				map[nowpoint] = 0;
				map[nowpoint +2] = 3;
				nowpoint +=1;

			}
			else if (map[nowpoint + 2] == 4)
			{
				map[nowpoint +1] = map[nowpoint];
				map[nowpoint] = 0;
				map[nowpoint +2] = 6;
				nowpoint +=1;

			}

		}

	}
}
