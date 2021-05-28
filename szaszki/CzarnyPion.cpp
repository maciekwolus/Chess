#include "CzarnyPion.h"

void CzarnyPion::promocja(Figura* Bierki[], int n, Sprite Obrazki[], string str)
{
	if (Bierki[n]->typ == "CPion")
	{
		Bierki[n]->grafika = Obrazki[7];
		Bierki[n]->wartosc = 9;
		Bierki[n]->typ = "CHetman";
	}
}

void CzarnyPion::ruch(Figura* Bierki[], string str, int n, bool& poprawnosc, int czyjRuch, int &pomocN, double tablicaBytow[8][8])
{
	if (czyjRuch % 2 == 1)
	{
		if (Bierki[n]->pierwszyRuch == 0)
		{
			if ((((int(str[3]) - 48 == Bierki[n]->y - 1) // 1 ruch w przd
				&& (str[2] == Bierki[n]->x) // ten sam rzad
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0) //sprawdzanie czy puste pole
				|| (int(str[3]) - 48 == Bierki[n]->y - 1)  //1 ruch w przod do bicia
				&& ((str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 96] > 0) || (str[2] == Bierki[n]->x - 1) && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 98] > 0))) //bicie na ukos
			{
				skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
			}
			else if ((int(str[3]) - 48 == Bierki[n]->y - 2) // 2 ruchy w przd
				&& (str[2] == Bierki[n]->x) // ten sam rzad
				&& tablicaBytow[3][int(Bierki[n]->x) - 97] == 0) // sprawdzenie czy puste
			{
				Bierki[n]->x = str[2];
				Bierki[n]->y = int(str[3]) - 48;
				Bierki[n]->pierwszyRuch += 1;
				poprawnosc = true;
			}
		}
		else if  //nie pierwszy rych
			((((int(str[3]) - 48 == Bierki[n]->y - 1) // 1 ruch w przd
				&& (str[2] == Bierki[n]->x) // ten sam rzad
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] == 0) //sprawdzanie czy puste pole
				|| (int(str[3]) - 48 == Bierki[n]->y - 1)  //1 ruch w przod do bicia
				&& ((str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 96] > 0) || (str[2] == Bierki[n]->x - 1) && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 98] > 0))) //bicie na ukos
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if //au passant prawo
			(Bierki[n]->y == 4  //tylko na rzedzie 3
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 1.5 //sprawdzenie czy stoi pion dobrze
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97 + 1] == 0 //czy pole za pionem puste
				&& str[2] == Bierki[n]->x + 1
				&& int(str[3]) - 48 == Bierki[n]->y - 1)
		{

			Bierki[n]->x = str[2];
			Bierki[n]->y = int(str[3]) - 48;
			Bierki[n]->pierwszyRuch += 1;
			poprawnosc = true;
			for (int i = 0; i < 32; i++)
			{
				if (Bierki[i]->x == Bierki[n]->x && Bierki[i]->y == Bierki[n]->y + 1)
				{
					Bierki[i]->x = 'z';
					Bierki[i]->y = 10;
					Bierki[i]->grafika.setPosition(-100, -100);
				}
			}

		}
		else if //au passant lewo
			(Bierki[n]->y == 4  //tylko na rzedzie 3
				&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 1.5 //sprawdzenie czy stoi pion dobrze
				&& tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97 - 1] == 0 //czy pole za pionem puste
				&& str[2] == Bierki[n]->x - 1
				&& int(str[3]) - 48 == Bierki[n]->y - 1)
		{

			Bierki[n]->x = str[2];
			Bierki[n]->y = int(str[3]) - 48;
			Bierki[n]->pierwszyRuch += 1;
			poprawnosc = true;
			for (int i = 0; i < 32; i++)
			{
				if (Bierki[i]->x == Bierki[n]->x && Bierki[i]->y == Bierki[n]->y + 1)
				{
					Bierki[i]->x = 'z';
					Bierki[i]->y = 10;
					Bierki[i]->grafika.setPosition(-100, -100);
				}
			}

		}
	}
}

void CzarnyPion::szach(Figura* Bierki[], int n, bool& Szach, int c, double tablicaBytow[8][8], int i)
{
	if (Bierki[i]->y - 1 == Bierki[c]->y && (Bierki[i]->x + 1 == Bierki[c]->x || Bierki[i]->x - 1 == Bierki[c]->x))
	{
		Szach = true;
	}
}

void CzarnyPion::mozliwyRuch(Figura* Bierki[], int czyjRuch, int& NBialychRuchow, int& NCzarnychRuchow, int n, string str, Sprite Obrazki[], bool& bialyMat, bool& bialyPat, bool& czarnyPat, bool& czarnyMat)
{
	//bedzie 4 roznych ruchow
	bool poprawnosc = false;

	if (str[1] <= '8' && str[1] >= '1' && str[0] <= 'h' && str[0] >= 'a')
	{
		//1
		str[2] = str[0]; //x
		str[3] = str[1] - 1; //y
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//2
		str[2] = str[0] + 1; //x
		str[3] = str[1] - 1; //y
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//3
		str[2] = str[0] - 1; //x
		str[3] = str[1] - 1; //y
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//4
		str[2] = str[0]; //x
		str[3] = str[1] - 2; //y
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}
	}
}
