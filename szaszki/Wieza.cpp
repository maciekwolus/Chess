#include "Wieza.h"

void Wieza::ruch(Figura* Bierki[], string str, int n, bool& poprawnosc, int czyjRuch, int& pomocN, double tablicaBytow[8][8])
{
	if (Bierki[n]->kolor == "Bialy" && czyjRuch % 2 == 0)
	{
		if (int(str[3]) - 48 == Bierki[n]->y)
		{
			if (str[2] == Bierki[n]->x + 1
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 2
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 3
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 4
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 4] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 5
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 5] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 6
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 5] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 6] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 7
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 5] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 6] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 7] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 1
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 2
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 3
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 4
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 4] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 5
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 5] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 6
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 5] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 6] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 7
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 5] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 6] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 7] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
		}
		else if (str[2] == Bierki[n]->x)
		{
			if (int(str[3]) - 48 == Bierki[n]->y + 1
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 2
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 3
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 3][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 4
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 4][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 5
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 5][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 6
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 5][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 6][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 7
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 5][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 6][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 7][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 1
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 2
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 3
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 3][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 4
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 4][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 5
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 5][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 6
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 5][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 6][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 7
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 5][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 6][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 7][int(Bierki[n]->x) - 97] <= 0)
			{
				skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
			}
		}
	}
	if (Bierki[n]->kolor == "Czarny" && czyjRuch % 2 == 1)
	{
		if (int(str[3]) - 48 == Bierki[n]->y)
		{
			if (str[2] == Bierki[n]->x + 1
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 2
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 3
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 4
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 4] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 5
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 5] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 6
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 5] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 6] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x + 7
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 5] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 6] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 7] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 1
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 2
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 3
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 4
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 4] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 5
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 5] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 6
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 5] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 6] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (str[2] == Bierki[n]->x - 7
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 4] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 5] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 6] == 0
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 7] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
		}
		else if (str[2] == Bierki[n]->x)
		{
			if (int(str[3]) - 48 == Bierki[n]->y + 1
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 2
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 3
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 3][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 4
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 4][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 5
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 5][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 6
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 5][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 6][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y + 7
				&& tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 5][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 6][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y - 7][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 1
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 2
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 3
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 3][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 4
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 4][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 5
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 5][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 6
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 5][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 6][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if (int(str[3]) - 48 == Bierki[n]->y - 7
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 3][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 4][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 5][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 6][int(Bierki[n]->x) - 97] == 0
				&& tablicaBytow[8 - Bierki[n]->y + 7][int(Bierki[n]->x) - 97] >= 0)
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
		}
	}
}

void Wieza::szach(Figura* Bierki[], int n, bool& Szach, int c, double tablicaBytow[8][8], int i)
{
	//gora i dol
	if (Bierki[i]->x == Bierki[c]->x)
	{
		//gora
		if (Bierki[i]->y + 1 == Bierki[c]->y)
		{
			Szach = true;
		}
		else if (Bierki[i]->y + 2 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y - 1][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->y + 3 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y - 1][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 2][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->y + 4 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y - 1][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 2][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 3][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->y + 6 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y - 1][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 2][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 3][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 4][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 5][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->y + 5 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y - 1][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 2][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 3][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 4][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->y + 7 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y - 1][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 2][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 3][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 4][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 5][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y - 6][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		//dol
		if (Bierki[i]->y - 1 == Bierki[c]->y)
		{
			Szach = true;
		}
		else if (Bierki[i]->y - 2 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y + 1][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->y - 3 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y + 1][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 2][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->y - 4 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y + 1][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 2][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 3][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->y - 6 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y + 1][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 2][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 3][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 4][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 5][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->y - 5 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y + 1][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 2][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 3][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 4][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->y - 7 == Bierki[c]->y
			&& tablicaBytow[8 - Bierki[i]->y + 1][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 2][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 3][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 4][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 5][int(Bierki[i]->x) - 97] == 0
			&& tablicaBytow[8 - Bierki[i]->y + 6][int(Bierki[i]->x) - 97] == 0)
		{
			Szach = true;
		}
	}
	else if (Bierki[i]->y == Bierki[c]->y)
	{
		//prawo
		if (Bierki[i]->x + 1 == Bierki[c]->x)
		{
			Szach = true;
		}
		else if (Bierki[i]->x + 2 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 1] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->x + 3 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 1] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 2] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->x + 4 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 1] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 2] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 3] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->x + 5 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 1] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 2] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 3] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 4] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->x + 6 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 1] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 2] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 3] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 4] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 5] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->x + 7 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 1] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 2] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 3] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 4] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 5] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 + 6] == 0)
		{
			Szach = true;
		}
		//lewo
		if (Bierki[i]->x - 1 == Bierki[c]->x)
		{
			Szach = true;
		}
		else if (Bierki[i]->x - 2 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 1] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->x - 3 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 1] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 2] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->x - 4 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 1] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 2] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 3] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->x - 5 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 1] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 2] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 3] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 4] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->x - 6 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 1] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 2] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 3] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 4] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 5] == 0)
		{
			Szach = true;
		}
		else if (Bierki[i]->x - 7 == Bierki[c]->x
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 1] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 2] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 3] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 4] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 5] == 0
			&& tablicaBytow[8 - Bierki[i]->y][int(Bierki[i]->x) - 97 - 6] == 0)
		{
			Szach = true;
		}
	}
}

void Wieza::mozliwyRuch(Figura* Bierki[], int czyjRuch, int& NBialychRuchow, int& NCzarnychRuchow, int n, string str, Sprite Obrazki[], bool& bialyMat, bool& bialyPat, bool& czarnyPat, bool& czarnyMat)
{
	//bedzie 28 roznych ruchow
	bool poprawnosc = false;

	if (str[1] <= '8' && str[1] >= '1' && str[0] <= 'h' && str[0] >= 'a')
	{
		//1-14
		for (int i = -7; i <= 8; i++)
		{
			if (i != 0)
			{
				str[2] = str[0]; //x
				str[3] = str[1] + i; //y
				if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
				{
					poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
				}
			}
		}
		//15-28
		for (int i = -7; i <= 8; i++)
		{
			if (i != 0)
			{
				str[2] = str[0] + i; //x
				str[3] = str[1]; //y
				if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
				{
					poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
				}
			}
		}
	}
}
