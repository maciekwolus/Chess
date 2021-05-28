#include "Skoczek.h"
#include <string>

void Skoczek::ruch(Figura* Bierki[], string str, int n, bool& poprawnosc, int czyjRuch, int &pomocN, double tablicaBytow[8][8])
{
	if (Bierki[n]->kolor == "Bialy" && czyjRuch % 2 == 0)
	{
		if (int(str[3]) - 48 == Bierki[n]->y + 2 && str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97 + 1] <= 0) //1
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y + 2 && str[2] == Bierki[n]->x - 1 && tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97 - 1] <= 0) //2
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 2 && str[2] == Bierki[n]->x - 1 && tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97 - 1] <= 0) //3
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 2 && str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97 + 1] <= 0) //4
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y + 1 && str[2] == Bierki[n]->x + 2 && tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97 + 2] <= 0) //5
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y + 1 && str[2] == Bierki[n]->x - 2 && tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97 - 2] <= 0) //6
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 1 && str[2] == Bierki[n]->x + 2 && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97 + 2] <= 0) //7
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 1 && str[2] == Bierki[n]->x - 2 && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97 - 2] <= 0) //8
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
	}
	if (Bierki[n]->kolor == "Czarny" && czyjRuch % 2 == 1)
	{
		if (int(str[3]) - 48 == Bierki[n]->y + 2 && str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97 + 1] >= 0) //1
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y + 2 && str[2] == Bierki[n]->x - 1 && tablicaBytow[8 - Bierki[n]->y - 2][int(Bierki[n]->x) - 97 - 1] >= 0) //2
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 2 && str[2] == Bierki[n]->x - 1 && tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97 - 1] >= 0) //3
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 2 && str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y + 2][int(Bierki[n]->x) - 97 + 1] >= 0) //4
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y + 1 && str[2] == Bierki[n]->x + 2 && tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97 + 2] >= 0) //5
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y + 1 && str[2] == Bierki[n]->x - 2 && tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97 - 2] >= 0) //6
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 1 && str[2] == Bierki[n]->x + 2 && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97 + 2] >= 0) //7
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 1 && str[2] == Bierki[n]->x - 2 && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97 - 2] >= 0) //8
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
	}
}

void Skoczek::szach(Figura* Bierki[], int n, bool& Szach, int c, double tablicaBytow[8][8], int i)
{
	if ((Bierki[i]->y + 2 == Bierki[c]->y && Bierki[i]->x + 1 == Bierki[c]->x)
		|| (Bierki[i]->y - 2 == Bierki[c]->y && Bierki[i]->x + 1 == Bierki[c]->x)
		|| (Bierki[i]->y + 2 == Bierki[c]->y && Bierki[i]->x - 1 == Bierki[c]->x)
		|| (Bierki[i]->y - 2 == Bierki[c]->y && Bierki[i]->x - 1 == Bierki[c]->x)
		|| (Bierki[i]->y + 1 == Bierki[c]->y && Bierki[i]->x + 2 == Bierki[c]->x)
		|| (Bierki[i]->y + 1 == Bierki[c]->y && Bierki[i]->x - 2 == Bierki[c]->x)
		|| (Bierki[i]->y - 1 == Bierki[c]->y && Bierki[i]->x + 2 == Bierki[c]->x)
		|| (Bierki[i]->y - 1 == Bierki[c]->y && Bierki[i]->x - 2 == Bierki[c]->x))
	{
		Szach = true;
	}
}

void Skoczek::mozliwyRuch(Figura* Bierki[], int czyjRuch, int& NBialychRuchow, int& NCzarnychRuchow, int n, string str, Sprite Obrazki[], bool& bialyMat, bool& bialyPat, bool& czarnyPat, bool& czarnyMat)
{
	//bedzie 8 roznych ruchow
	bool poprawnosc = false;

	if (str[1] <= '8' && str[1] >= '1' && str[0] <= 'h' && str[0] >= 'a') 
	{
		//1
		str[2] = str[0] + 1;
		str[3] = str[1] + 2;
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//2
		str[2] = str[0] - 1;
		str[3] = str[1] + 2;
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//3 
		str[2] = str[0] + 1;
		str[3] = str[1] - 2;
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//4
		str[2] = str[0] - 1;
		str[3] = str[1] - 2;
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}


		//5
		str[2] = str[0] + 2;
		str[3] = str[1] + 1;
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//6
		str[2] = str[0] - 2;
		str[3] = str[1] + 1;
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//7
		str[2] = str[0] + 2;
		str[3] = str[1] - 1;
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//8
		str[2] = str[0] - 2;
		str[3] = str[1] - 1;
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}
	}
	
}
