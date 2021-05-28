#include "Krol.h"

void Krol::ruch(Figura* Bierki[], string str, int n, bool& poprawnosc, int czyjRuch, int &pomocN, double tablicaBytow[8][8])
{
	if (Bierki[n]->kolor == "Bialy" && czyjRuch % 2 == 0)
	{
		if (int(str[3]) - 48 == Bierki[n]->y + 1 && str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97 + 1] <= 0) //1
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y + 1 && str[2] == Bierki[n]->x - 1 && tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97 - 1] <= 0) //2
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 1 && str[2] == Bierki[n]->x - 1 && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97 - 1] <= 0) //3
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 1 && str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97 + 1] <= 0) //4
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y + 1 && str[2] == Bierki[n]->x && tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] <= 0) //5
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 1 && str[2] == Bierki[n]->x && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] <= 0) //6
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y && str[2] == Bierki[n]->x - 1 && tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] <= 0) //7
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y && str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] <= 0) //7
		{
			skracaczBialy(Bierki, str, poprawnosc, pomocN, n);
		}
		//krotka roszada
		else if (int(str[3]) - 48 == Bierki[n]->y && str[2] == Bierki[n]->x + 2  //2 ruchy w prawo
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0   // czy pole o 1 w prawo wolne
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0   // czy pole o 2 w prawo wolne
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] == 4)  //czy wieza git stoi
		{
			for (int i = 0; i < 32; i++)
			{
				if (Bierki[i]->x == 'h' && Bierki[i]->y == 1 && Bierki[i]->pierwszyRuch == 0)
				{
					//zmiana parametro wiezy
					Bierki[i]->pierwszyRuch += 1;
					Bierki[i]->x = 'f';
					Bierki[i]->grafika.setPosition(500, 700);
					//i krola
					Bierki[n]->x = str[2];
					Bierki[n]->y = int(str[3]) - 48;
					Bierki[n]->pierwszyRuch += 1;
					//i mozna sie ruszyc
					poprawnosc = true;
				}
			}
		}
		//dluga roszada
		else if ((int(str[3]) - 48 == Bierki[n]->y && str[2] == Bierki[n]->x - 2)  //2 ruchy w lewo
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0   // czy pole o 1 w lewo wolne
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0   // czy pole o 2 w lewo wolne
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] == 0  // czy pole o 3 w lewo wolne
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 4] == 4)   //czy wieza git stoi
		{
			for (int i = 0; i < 32; i++)
			{
				if (Bierki[i]->x == 'a' && Bierki[i]->y == 1 && Bierki[i]->pierwszyRuch == 0)
				{
					//zmiana parametro wiezy
					Bierki[i]->pierwszyRuch += 1;
					Bierki[i]->x = 'd';
					Bierki[i]->grafika.setPosition(300, 700);
					//i krola
					Bierki[n]->x = str[2];
					Bierki[n]->y = int(str[3]) - 48;
					Bierki[n]->pierwszyRuch += 1;
					//i mozna sie ruszyc
					poprawnosc = true;
				}
			}
		}
	}
	if (Bierki[n]->kolor == "Czarny" && czyjRuch % 2 == 1)
	{
		if (int(str[3]) - 48 == Bierki[n]->y + 1 && str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97 + 1] >= 0) //1
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y + 1 && str[2] == Bierki[n]->x - 1 && tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97 - 1] >= 0) //2
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 1 && str[2] == Bierki[n]->x - 1 && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97 - 1] >= 0) //3
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 1 && str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97 + 1] >= 0) //4
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y + 1 && str[2] == Bierki[n]->x && tablicaBytow[8 - Bierki[n]->y - 1][int(Bierki[n]->x) - 97] >= 0) //5
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y - 1 && str[2] == Bierki[n]->x && tablicaBytow[8 - Bierki[n]->y + 1][int(Bierki[n]->x) - 97] >= 0) //6
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y && str[2] == Bierki[n]->x - 1 && tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] >= 0) //7
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		else if (int(str[3]) - 48 == Bierki[n]->y && str[2] == Bierki[n]->x + 1 && tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] >= 0) //7
		{
			skracaczCzarny(Bierki, str, poprawnosc, pomocN, n);
		}
		//krotka roszada
		else if (int(str[3]) - 48 == Bierki[n]->y && str[2] == Bierki[n]->x + 2  //2 ruchy w prawo
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 1] == 0   // czy pole o 1 w prawo wolne
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 2] == 0   // czy pole o 2 w prawo wolne
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 + 3] == -4)  //czy wieza git stoi
		{
			for (int i = 0; i < 32; i++)
			{
				if (Bierki[i]->x == 'h' && Bierki[i]->y == 8 && Bierki[i]->pierwszyRuch == 0)
				{
					//zmiana parametro wiezy
					Bierki[i]->pierwszyRuch += 1;
					Bierki[i]->x = 'f';
					Bierki[i]->grafika.setPosition(500, 0);
					//i krola
					Bierki[n]->x = str[2];
					Bierki[n]->y = int(str[3]) - 48;
					Bierki[n]->pierwszyRuch += 1;
					//i mozna sie ruszyc
					poprawnosc = true;
				}
			}
		}
		//dluga roszada
		else if ((int(str[3]) - 48 == Bierki[n]->y && str[2] == Bierki[n]->x - 2)  //2 ruchy w lewo
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 1] == 0   // czy pole o 1 w lewo wolne
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 2] == 0   // czy pole o 2 w lewo wolne
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 3] == 0  // czy pole o 3 w lewo wolne
			&& tablicaBytow[8 - Bierki[n]->y][int(Bierki[n]->x) - 97 - 4] == -4)   //czy wieza git stoi
		{
			for (int i = 0; i < 32; i++)
			{
				if (Bierki[i]->x == 'a' && Bierki[i]->y == 8 && Bierki[i]->pierwszyRuch == 0)
				{
					//zmiana parametro wiezy
					Bierki[i]->pierwszyRuch += 1;
					Bierki[i]->x = 'd';
					Bierki[i]->grafika.setPosition(300, 0);
					//i krola
					Bierki[n]->x = str[2];
					Bierki[n]->y = int(str[3]) - 48;
					Bierki[n]->pierwszyRuch += 1;
					//i mozna sie ruszyc
					poprawnosc = true;
				}
			}
		}
	}
}

void Krol::mozliwyRuch(Figura* Bierki[], int czyjRuch, int& NBialychRuchow, int& NCzarnychRuchow, int n, string str, Sprite Obrazki[], bool& bialyMat, bool& bialyPat, bool& czarnyPat, bool& czarnyMat)
{
	//bedzie 8 roznych ruchow
	bool poprawnosc = false;

	if (str[1] <= '8' && str[1] >= '1' && str[0] <= 'h' && str[0] >= 'a')
	{
		//1
		str[2] = str[0] + 1; //x
		str[3] = str[1] + 1; //y
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
		str[3] = str[1] + 1; //y
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//4
		str[2] = str[0] - 1; //x
		str[3] = str[1] + 1; //y
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//5
		str[2] = str[0]; //x
		str[3] = str[1] + 1; //y
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//6
		str[2] = str[0]; //x
		str[3] = str[1] - 1; //y
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//7
		str[2] = str[0] - 1; //x
		str[3] = str[1]; //y
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}

		//8
		str[2] = str[0] + 1; //x
		str[3] = str[1]; //y
		if (str[3] <= '8' && str[3] >= '1' && str[2] <= 'h' && str[2] >= 'a')
		{
			poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, Obrazki, 1, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);
		}
	}
}
