#ifndef KROL_PW
#define KROL_PW
#include "Figura.h"
#include "Gra.h"

class Krol:
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

    void ruch(Figura* Bierki[], string str, int n, bool& poprawnosc, int czyjRuch, int &pomocN, double tablicaBytow[8][8]);
    void mozliwyRuch(Figura* Bierki[], int czyjRuch, int& NBialychRuchow, int& NCzarnychRuchow, int n, string str, Sprite Obrazki[], bool& bialyMat, bool& bialyPat, bool& czarnyPat, bool& czarnyMat);

    Krol(string T, double W, int R, string k, Sprite g, char wsp_x, int wsp_y)
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

#endif // !KROL_PW
