#ifndef FRONTEND_PW
#define FRONTEND_PW
#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window.hpp>
#include "Gra.h"

using namespace sf;
using namespace std;
 
string zapiszRuchy(Vector2f v, int piksel);

Vector2f przesunObraz(char a, char b, int piksel);

void ruszObraz(string str, Figura* Bierki[]);

#endif // !FRONTEND_PW
