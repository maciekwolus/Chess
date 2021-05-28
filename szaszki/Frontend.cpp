#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window.hpp>
#include "Frontend.h"


using namespace sf;
using namespace std;


string zapiszRuchy(Vector2f v, int piksel)
{
    string s = "";
    s += char((v.x / piksel) + 97);
    s += char((7 - v.y / piksel) + 49);

    return s;
}

Vector2f przesunObraz(char a, char b, int piksel)
{
    int x = int(a) - 97;
    int y = 7 - int(b) + 49;
    return Vector2f(x * piksel, y * piksel);
}

void ruszObraz(string str, Figura* Bierki[])
{
    Vector2f oldPos = przesunObraz(str[0], str[1], 100);
    Vector2f newPos = przesunObraz(str[2], str[3], 100);

    if (oldPos != newPos)
    {
        for (int i = 0; i < 32; i++)
        {
            if (Bierki[i]->grafika.getPosition() == newPos)
            {
                Bierki[i]->grafika.setPosition(-100, -100);
                Bierki[i]->x = 'z';
                Bierki[i]->y = 12;
            }
        }

        for (int i = 0; i < 32; i++)
        {
            if (Bierki[i]->grafika.getPosition() == oldPos)
                Bierki[i]->grafika.setPosition(newPos);
        }
    }
}
