#ifndef CZARNYPION_PW
#define CZARNYPION_PW
#include "Figura.h"
#include "Gra.h"

class CzarnyPion :
    public Figura
{
public:

    double wartosc;
    int pierwszyRuch;
    string kolor, typ;
    Sprite grafika;

    //wspolrzedne 
    char x;
    int y;

    void promocja(Figura* Bierki[], int n, Sprite Obrazki[], string str);
    void ruch(Figura* Bierki[], string str, int n, bool& poprawnosc, int czyjRuch, int &pomocN, double tablicaBytow[8][8]);
    void szach(Figura* Bierki[], int n, bool& Szach, int c, double tablicaBytow[8][8], int i);
    void mozliwyRuch(Figura* Bierki[], int czyjRuch, int& NBialychRuchow, int& NCzarnychRuchow, int n, string str, Sprite Obrazki[], bool& bialyMat, bool& bialyPat, bool& czarnyPat, bool& czarnyMat);

    CzarnyPion(string T, double W, int R, string k, Sprite g, char wsp_x, int wsp_y)
        : Figura(T, W, R, k, g, wsp_x, wsp_y)
    {
        typ = T;
        wartosc = W;
        pierwszyRuch = R;
        kolor = k;
        grafika = g;
        x = wsp_x;
        y = wsp_y;
    }


};

#endif // !CZARNYPION_PW
