#ifndef FIGURA_PW
#define FIGURA_PW

#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window.hpp>

using namespace sf;
using namespace std;

class Figura
{
public:
    double wartosc;
    int pierwszyRuch;
    string kolor,typ;
    Sprite grafika;
    
    //wspolrzedne 
    char x;
    int y;

    virtual void promocja(Figura* Bierki[], int n, Sprite Obrazki[], string str); //promocja piona na hetmana jak dojdzie do konca
    virtual void ruch(Figura* Bierki[], string str, int n, bool& poprawnosc, int czyjRuch,int& pomocN, double tablicaBytow[8][8]); //ruch bierki
    virtual void szach(Figura* Bierki[], int n, bool& Szach, int c, double tablicaBytow[8][8], int i); //sprawdzenie czy jest szach 
    virtual void mozliwyRuch(Figura* Bierki[], int czyjRuch, int& NBialychRuchow, int& NCzarnychRuchow, int n, string str, Sprite Obrazki[], bool& bialyMat, bool& bialyPat, bool& czarnyPat, bool& czarnyMat); //liczba mozliwych do zrobienia ruchow - do szacha i pata

    Figura(string T, double W, int R, string k, Sprite g, char wsp_x, int wsp_y)
    {
        typ = T;
        wartosc = W;
        pierwszyRuch = R;
        kolor = k;
        grafika = g;
        x = wsp_x;
        y = wsp_y;
    }

    friend class Skoczek; 
    friend class Goniec;
    friend class BPion;
    friend class CPion;
    friend class Wieza;
    friend class Krol;
    friend class Hetman;
};

#endif // !FIGURA_PW

