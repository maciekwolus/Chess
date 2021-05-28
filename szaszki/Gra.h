#ifndef GRA_PW
#define GRA_PW
#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window.hpp>
#include "Skoczek.h"
#include "Goniec.h"
#include "BialyPion.h"
#include "CzarnyPion.h"
#include "Wieza.h"
#include "Hetman.h"
#include "Krol.h"

using namespace sf;
using namespace std;

void skracaczBialy(Figura* Bierki[], string str, bool& poprawnosc, int& pomocN, int n);
void skracaczCzarny(Figura* Bierki[], string str, bool& poprawnosc, int& pomocN, int n);
void poprawnyRuch(Figura* Bierki[], string str, int n, bool& poprawnosc, int czyjRuch, Sprite Obrazki[], int zastosowanie, int& NBialychRuchow, int& NCzarnychRuchow, bool &bialyMat, bool &bialyPat,bool &czarnyPat, bool &czarnyMat);
void czySzach(Figura* Bierki[], int n, bool& bialySzach, bool& czarnySzach, double tablicaBytow[8][8]);
void mozliweRuchy(Figura* Bierki[], int czyjRuch, int& NBialychRuchow, int& NCzarnychRuchow, Sprite Obrazki[], bool& bialyMat, bool& bialyPat, bool& czarnyPat, bool& czarnyMat);
#endif // !GRA_PW