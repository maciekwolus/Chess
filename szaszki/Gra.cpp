#include "Gra.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window.hpp>
#include <string>

void skracaczBialy(Figura* Bierki[], string str, bool& poprawnosc, int& pomocN, int n)
{
	for (int i = 0; i < 32; i++)
	{
		if (Bierki[i]->kolor == "Czarny" && Bierki[i]->x == str[2] && Bierki[i]->y == int(str[3]) - 48)
		{
			pomocN = i;
			Bierki[i]->x = 'z';
			Bierki[i]->y = 12;
		}
	}
	Bierki[n]->x = str[2];
	Bierki[n]->y = int(str[3]) - 48;
	Bierki[n]->pierwszyRuch += 1;
	poprawnosc = true;
}

void skracaczCzarny(Figura* Bierki[], string str, bool& poprawnosc, int& pomocN, int n)
{
	for (int i = 0; i < 32; i++)
	{
		if (Bierki[i]->kolor == "Bialy" && Bierki[i]->x == str[2] && Bierki[i]->y == int(str[3]) - 48)
		{
			pomocN = i;
			Bierki[i]->x = 'z';
			Bierki[i]->y = 12;
		}
	}
	Bierki[n]->x = str[2];
	Bierki[n]->y = int(str[3]) - 48;
	Bierki[n]->pierwszyRuch += 1;
	poprawnosc = true;
}

void poprawnyRuch(Figura* Bierki[], string str, int n, bool& poprawnosc, int czyjRuch, Sprite Obrazki[], int zastosowanie, int& NBialychRuchow, int& NCzarnychRuchow, bool& bialyMat, bool& bialyPat, bool& czarnyPat, bool& czarnyMat)
{
	//pomocnicze zapiski
	char pomocX1 = Bierki[n]->x;
	int pomocY1 = Bierki[n]->y, pomocN = -1, przechodzien=0, ktoryRuch=Bierki[n]->pierwszyRuch;
	bool bialySzach = false, czarnySzach = false;

	//tablica pomocnicza do zbijania
	double tablicaBytow[8][8];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			tablicaBytow[i][j] = 0;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			for (int k = 0; k < 32; k++)
			{
				if (int(Bierki[k]->x) - 97 == j && Bierki[k]->y - 1 == 7 - i)
				{
					if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 1 && Bierki[k]->pierwszyRuch != 1)
						tablicaBytow[i][j] = 1;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 1 && Bierki[k]->pierwszyRuch != 1)
						tablicaBytow[i][j] = -1;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 1 && Bierki[k]->pierwszyRuch == 1)
						tablicaBytow[i][j] = 1.5;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 1 && Bierki[k]->pierwszyRuch == 1)
						tablicaBytow[i][j] = -1.5;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 3)
						tablicaBytow[i][j] = 2;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 3)
						tablicaBytow[i][j] = -2;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 3.15)
						tablicaBytow[i][j] = 3;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 3.15)
						tablicaBytow[i][j] = -3;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 5)
						tablicaBytow[i][j] = 4;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 5)
						tablicaBytow[i][j] = -4;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 9)
						tablicaBytow[i][j] = 5;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 9)
						tablicaBytow[i][j] = -5;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 100)
						tablicaBytow[i][j] = 6;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 100)
						tablicaBytow[i][j] = -6;
				}
			}

	//wypisywanie pomocnicze
	/*system("cls");
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << tablicaBytow[i][j] << ';';
		}cout << endl;
	}*/

	//ruchy
	if (int(str[3]) - 48 < 9 && int(str[2]) - 97 < 8 && int(str[2]) - 97 > -1) //zabezpieczenie przed wyjsciem z mapy
	{
		Bierki[n]->ruch(Bierki, str, n, poprawnosc, czyjRuch, pomocN, tablicaBytow);
	}
	
	//aktualizacja
    //tablica pomocnicza do zbijania
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			tablicaBytow[i][j] = 0;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			for (int k = 0; k < 32; k++)
			{
				if (int(Bierki[k]->x) - 97 == j && Bierki[k]->y - 1 == 7 - i)
				{
					if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 1 && Bierki[k]->pierwszyRuch != 1)
						tablicaBytow[i][j] = 1;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 1 && Bierki[k]->pierwszyRuch != 1)
						tablicaBytow[i][j] = -1;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 1 && Bierki[k]->pierwszyRuch == 1)
						tablicaBytow[i][j] = 1.5;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 1 && Bierki[k]->pierwszyRuch == 1)
						tablicaBytow[i][j] = -1.5;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 3)
						tablicaBytow[i][j] = 2;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 3)
						tablicaBytow[i][j] = -2;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 3.15)
						tablicaBytow[i][j] = 3;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 3.15)
						tablicaBytow[i][j] = -3;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 5)
						tablicaBytow[i][j] = 4;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 5)
						tablicaBytow[i][j] = -4;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 9)
						tablicaBytow[i][j] = 5;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 9)
						tablicaBytow[i][j] = -5;
					else if (Bierki[k]->kolor == "Bialy" && Bierki[k]->wartosc == 100)
						tablicaBytow[i][j] = 6;
					else if (Bierki[k]->kolor == "Czarny" && Bierki[k]->wartosc == 100)
						tablicaBytow[i][j] = -6;
				}
			}

	//sprawdzenie czy jest szach
	czySzach(Bierki, n, bialySzach, czarnySzach, tablicaBytow);

	//przekazanie do mata
	if (zastosowanie == 0)
	{
		czarnyMat = czarnySzach;
		bialyMat = bialySzach;
	}

	//bajery jak jest szach
	if (czyjRuch % 2 == 1 && bialySzach == true) //biale szachują
	{
		przechodzien++;
		poprawnosc = false;
		Bierki[n]->x = pomocX1;
		Bierki[n]->y = pomocY1;
		Bierki[n]->pierwszyRuch -= 1;
		bialySzach = false;

		//nie zmienianie wspolrzednych jak jest szach
		if (pomocN >= 0)
		{
			Bierki[pomocN]->x = str[2];
			Bierki[pomocN]->y = int(str[3]) - 48;
		}
	}
	if (czyjRuch % 2 == 0 && czarnySzach == true) //czarne szachuja
	{
		przechodzien++;
		poprawnosc = false;
		Bierki[n]->x = pomocX1;
		Bierki[n]->y = pomocY1;
		Bierki[n]->pierwszyRuch -= 1;
		czarnySzach = false;

		//nie zmienianie wspolrzednych jak jest szach
		if (pomocN >= 0)
		{
			Bierki[pomocN]->x = str[2];
			Bierki[pomocN]->y = int(str[3]) - 48;
		}
	}

	//tu mi sie musza dodac tamte o
	if (poprawnosc == true && zastosowanie == 1)
	{
		if (Bierki[n]->kolor=="Bialy")
		{
			NBialychRuchow += 1;
			//cout << "ruch->" << str << endl;
		}
		if (Bierki[n]->kolor == "Czarny")
		{
			NCzarnychRuchow += 1;
		}
	}
	//bajery do drugiego zasowania
	if (zastosowanie == 1)
	{
		poprawnosc = false;
		Bierki[n]->x = pomocX1;
		Bierki[n]->y = pomocY1;
		Bierki[n]->pierwszyRuch = ktoryRuch;

		//nie zmienianie wspolrzednych jak jest szach
		if (pomocN >= 0)
		{
			Bierki[pomocN]->x = str[2];
			Bierki[pomocN]->y = int(str[3]) - 48;
		}
	}

	//promocja piona bialego
	if (Bierki[n]->y == 8 && Bierki[n]->typ == "BPion" && zastosowanie == 0)
	{
		Bierki[n]->promocja(Bierki, n, Obrazki, str);
	}
	//promocja piona czarnego
	if (Bierki[n]->y == 1 && Bierki[n]->typ == "CPion" && zastosowanie == 0)
	{
		Bierki[n]->promocja(Bierki, n, Obrazki, str);
	}
}

void mozliweRuchy(Figura* Bierki[],  int czyjRuch, int& NBialychRuchow, int& NCzarnychRuchow, Sprite Obrazki[], bool& bialyMat, bool& bialyPat, bool& czarnyPat, bool& czarnyMat)
{
	for (int i = 0; i < 32; i++)
	{
		//pobranie poczatkowych wspolrzednych i zaimplementowanie w stringa (2 pierwsze)
		char wspX = Bierki[i]->x;
		int wspY = Bierki[i]->y;
		string holder = "zzzz";
		holder[0] = wspX;
		string pomocnik = to_string(Bierki[i]->y);
		holder[1] = pomocnik[0];

		Bierki[i]->mozliwyRuch(Bierki, czyjRuch, NBialychRuchow, NCzarnychRuchow, i, holder, Obrazki,bialyMat, bialyPat,czarnyMat,czarnyPat);
	}
}

void czySzach(Figura* Bierki[], int n, bool& bialySzach, bool& czarnySzach, double tablicaBytow[8][8])
{
	//czarny krol Bierki[31], bialy Bierki[30]
	int b = 30, c = 31;

	for (int i = 0; i < 32; i++) //sprawdzanie bierek po kolei
	{
		if (Bierki[i]->x >= 'a' && Bierki[i]->x <= 'h' && Bierki[i]->y >= 1 && Bierki[i]->y <= 8) //sprawdzenie czy nie są zbite
		{
			if (Bierki[i]->kolor == "Bialy")
			{
				Bierki[i]->szach(Bierki, n, bialySzach, c, tablicaBytow, i);
			}

			else if (Bierki[i]->kolor == "Czarny")
			{
				Bierki[i]->szach(Bierki, n, czarnySzach, b, tablicaBytow, i);
			}
		}
	}

}
