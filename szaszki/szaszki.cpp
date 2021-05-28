#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window.hpp>
#include <list>
#include "Kursor.h"
#include "Frontend.h"

using namespace sf;
using namespace std;

const int piksel = 100;

int main()
{ 
    // zrobienie okienka
    RenderWindow window(VideoMode(800, 800), "Szachy");
    
    // wczytywanie tekstur
    Texture t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16;  
    t1.loadFromFile("obrazki/Plansza.png");
    t2.loadFromFile("obrazki/BPion.png");
    t3.loadFromFile("obrazki/CPion.png");
    t4.loadFromFile("obrazki/BSkoczek.png");
    t5.loadFromFile("obrazki/CSkoczek.png");
    t6.loadFromFile("obrazki/BGoniec.png");
    t7.loadFromFile("obrazki/CGoniec.png");
    t8.loadFromFile("obrazki/BWieza.png");
    t9.loadFromFile("obrazki/CWieza.png");
    t10.loadFromFile("obrazki/BHetman.png");
    t11.loadFromFile("obrazki/CHetman.png");
    t12.loadFromFile("obrazki/BKrol.png");
    t13.loadFromFile("obrazki/CKrol.png");
    t14.loadFromFile("obrazki/BProm.png");
    t15.loadFromFile("obrazki/CProm.png");

    // definiowanie tekstur
    Sprite sBoard(t1);   
    Sprite BPion(t2);
    Sprite CPion(t3);
    Sprite BSkoczek(t4);
    Sprite CSkoczek(t5);
    Sprite BGoniec(t6);
    Sprite CGoniec(t7);
    Sprite BWieza(t8);
    Sprite CWieza(t9);
    Sprite BHetman(t10);
    Sprite CHetman(t11);
    Sprite BKrol(t12);
    Sprite CKrol(t13);
    
    Sprite promObrazki[8] =
    {
        BSkoczek, CSkoczek, BGoniec, CGoniec, BWieza, CWieza, BHetman, CHetman
    };

    Sprite Obrazki[32];

    Obrazki[0] = CPion;
    Obrazki[1] = CPion;
    Obrazki[2] = CPion;
    Obrazki[3] = CPion;
    Obrazki[4] = CPion;
    Obrazki[5] = CPion;
    Obrazki[6] = CPion;
    Obrazki[7] = CPion;
    Obrazki[8] = CSkoczek;
    Obrazki[9] = CSkoczek;
    Obrazki[10] = CGoniec;
    Obrazki[11] = CGoniec;
    Obrazki[12] = CWieza;
    Obrazki[13] = CWieza;
    Obrazki[14] = CHetman;
    Obrazki[15] = CKrol;
    Obrazki[16] = BPion;
    Obrazki[17] = BPion;
    Obrazki[18] = BPion;
    Obrazki[19] = BPion;
    Obrazki[20] = BPion;
    Obrazki[21] = BPion;
    Obrazki[22] = BPion;
    Obrazki[23] = BPion;
    Obrazki[24] = BSkoczek;
    Obrazki[25] = BSkoczek;
    Obrazki[26] = BGoniec;
    Obrazki[27] = BGoniec;
    Obrazki[28] = BWieza;
    Obrazki[29] = BWieza;
    Obrazki[30] = BHetman;
    Obrazki[31] = BKrol;
    
    Obrazki[0].setPosition(0, 100);
    Obrazki[1].setPosition(100, 100);
    Obrazki[2].setPosition(200, 100);
    Obrazki[3].setPosition(300, 100);
    Obrazki[4].setPosition(400, 100);
    Obrazki[5].setPosition(500, 100);
    Obrazki[6].setPosition(600, 100);
    Obrazki[7].setPosition(700, 100);
    Obrazki[8].setPosition(100, 0);
    Obrazki[9].setPosition(600, 0);
    Obrazki[10].setPosition(200, 0);
    Obrazki[11].setPosition(500, 0);
    Obrazki[12].setPosition(0, 0);
    Obrazki[13].setPosition(700, 0);
    Obrazki[14].setPosition(300, 0);
    Obrazki[15].setPosition(400, 0);
    Obrazki[16].setPosition(0, 600);
    Obrazki[17].setPosition(100, 600);
    Obrazki[18].setPosition(200, 600);
    Obrazki[19].setPosition(300, 600);
    Obrazki[20].setPosition(400, 600);
    Obrazki[21].setPosition(500, 600);
    Obrazki[22].setPosition(600, 600);
    Obrazki[23].setPosition(700, 600);
    Obrazki[24].setPosition(100, 700);
    Obrazki[25].setPosition(600, 700);
    Obrazki[26].setPosition(200, 700);
    Obrazki[27].setPosition(500, 700);
    Obrazki[28].setPosition(0, 700);
    Obrazki[29].setPosition(700, 700);
    Obrazki[30].setPosition(300, 700);
    Obrazki[31].setPosition(400, 700);

    //pomocne zmienne
    bool isMove = false, poprawnosc = false, bialySzach = false, czarnySzach = false;
    bool bialyPat = false, bialyMat = false, czarnyPat = false, czarnyMat = false, koniec = false;
    Kursor kursor(0, 0);
    int n = 0, NBialychRuchow = 0, NCzarnychRuchow = 0;
    Vector2f oldPos, newPos;
    string str, strPomoc="0", w;
    int czyjRuch = 2; //parzyste biale, nieparzyste czarne

    //lista ruchow
    list<string> listaRuchow;

    //tabela klas
    Figura *Bierki[32] =
    {
        // typ, wartosc, pierwszyruch, kolor, grafika, kolumna, rzad
        // Figura(string T, float W, int R, string k, Sprite g, char wsp_x, int wsp_y)
        new BialyPion("BPion", 1.0, 0,  "Bialy", Obrazki[16], 'a', 2), //1
        new BialyPion("BPion", 1.0, 0,  "Bialy", Obrazki[17], 'b', 2), //2
        new BialyPion("BPion", 1.0, 0,  "Bialy", Obrazki[18], 'c', 2), //3
        new BialyPion("BPion", 1.0, 0,  "Bialy", Obrazki[19], 'd', 2), //4
        new BialyPion("BPion", 1.0, 0,  "Bialy", Obrazki[20], 'e', 2), //5
        new BialyPion("BPion", 1.0, 0,  "Bialy", Obrazki[21], 'f', 2), //6 
        new BialyPion("BPion", 1.0, 0,  "Bialy", Obrazki[22], 'g', 2), //7 
        new BialyPion("BPion", 1.0, 0,  "Bialy", Obrazki[23], 'h', 2), //8
        new CzarnyPion("CPion", 1.0, 0,  "Czarny", Obrazki[0], 'a', 7), //9
        new CzarnyPion("CPion", 1.0, 0,  "Czarny", Obrazki[1], 'b', 7), //10
        new CzarnyPion("CPion", 1.0, 0,  "Czarny", Obrazki[2], 'c', 7), //11
        new CzarnyPion("CPion", 1.0, 0,  "Czarny", Obrazki[3], 'd', 7), //12
        new CzarnyPion("CPion", 1.0, 0,  "Czarny", Obrazki[4], 'e', 7), //13
        new CzarnyPion("CPion", 1.0, 0,  "Czarny", Obrazki[5], 'f', 7), //14
        new CzarnyPion("CPion", 1.0, 0,  "Czarny", Obrazki[6], 'g', 7), //15
        new CzarnyPion("CPion", 1.0, 0,  "Czarny", Obrazki[7], 'h', 7), //16

        new Skoczek("BSkoczek", 3.0, 0,  "Bialy", Obrazki[24], 'b', 1), //17
        new Skoczek("BSkoczek", 3.0, 0,  "Bialy", Obrazki[25], 'g', 1), //18
        new Skoczek("CSkoczek", 3.0, 0,  "Czarny", Obrazki[8], 'b', 8), //19
        new Skoczek("CSkoczek", 3.0, 0,  "Czarny", Obrazki[9], 'g', 8), //20

        new Goniec("BGoniec", 3.15, 0,  "Bialy", Obrazki[26], 'c', 1), //21
        new Goniec("BGoniec", 3.15, 0,  "Bialy", Obrazki[27], 'f', 1), //22
        new Goniec("CGoniec", 3.15, 0,  "Czarny", Obrazki[10], 'c', 8), //23
        new Goniec("CGoniec", 3.15, 0,  "Czarny", Obrazki[11], 'f', 8), //24

        new Wieza("BWieza", 5, 0,  "Bialy", Obrazki[28], 'a', 1), //25
        new Wieza("BWieza", 5, 0,  "Bialy", Obrazki[29], 'h', 1), //26
        new Wieza("CWieza", 5, 0,  "Czarny", Obrazki[12], 'a', 8), //27
        new Wieza("CWieza", 5, 0,  "Czarny", Obrazki[13], 'h', 8), //28

        new Hetman("BHetman", 9, 0,  "Bialy", Obrazki[30], 'd', 1), //29
        new Hetman("CHetman", 9, 0,  "Czarny", Obrazki[14], 'd', 8), //30

        new Krol("BKrol", 100, 0,  "Bialy", Obrazki[31], 'e', 1), //31
        new Krol("CKrol", 100, 0,  "Czarny", Obrazki[15], 'e', 8), //32
    };

    while (window.isOpen())
    {
        Vector2i pos = Mouse::getPosition(window); // pozycja myszki

        Event e;  // magiczna zmienan event
        while (window.pollEvent(e) && koniec == false)
        {
            if (e.type == Event::Closed)  // mozliwosc zamkniecia okna
                window.close();

            if (e.type == Event::MouseButtonPressed) //ruszanie obrazkow bierek
                if (e.key.code == Mouse::Left)
                    for (int i = 0; i < 32; i++)
                    {
                        if (Bierki[i]->grafika.getGlobalBounds().contains(pos.x, pos.y))
                        {
                            isMove = true; n = i;
                            kursor.x = pos.x - Bierki[i]->grafika.getPosition().x;
                            kursor.y = pos.y - Bierki[i]->grafika.getPosition().y;
                            oldPos = Bierki[i]->grafika.getPosition();
                        }

                    }
            if (e.type == Event::MouseButtonReleased) //ruszanie obrazkow bierek ale puszczanie
                if (e.key.code == Mouse::Left)
                {
                    
                    isMove = false;
                    Vector2f p = Bierki[n]->grafika.getPosition() + Vector2f(piksel / 2, piksel / 2);
                    newPos = Vector2f(piksel * int(p.x / piksel), piksel * int(p.y / piksel));
                    str = zapiszRuchy(oldPos, piksel) + zapiszRuchy(newPos, piksel);

                    poprawnyRuch(Bierki, str, n, poprawnosc, czyjRuch, promObrazki, 0, NBialychRuchow, NCzarnychRuchow, bialyMat, bialyPat, czarnyPat, czarnyMat);  // sprawdzenie czy mozna sie ruszyc w dany sposob

                    if (poprawnosc == true)
                    {
                        ruszObraz(str, Bierki);
                        //wypisywanie i zapisywanie ruchow (jak nie sa takie same)
                        if (!(str[0] == str[2] && str[1] == str[3]) && str != strPomoc)
                        {
                            cout << str[0] << str[1] << "->" << str[2] << str[3] << endl; //wypisanie ruchu
                            listaRuchow.push_back(str); //zapisanie ruchu w liscie
                        }
                        Bierki[n]->grafika.setPosition(newPos); //ustawienie obrazka
                        strPomoc = str; //zmienna zeby sie nie zapisywalo jak sie w tym samym miejscu 
                        czyjRuch += 1; //zmiana tego kto moze 
                    }
                    if (str != strPomoc)//powrot na stare miesjce
                    {
                        string powrot;
                        powrot = str;
                        powrot[2] = str[0];
                        powrot[3] = str[1];
                        ruszObraz(powrot, Bierki);
                        Bierki[n]->grafika.setPosition(oldPos);
                    }

                    //sprawdzenie konca gry
                    mozliweRuchy(Bierki, czyjRuch, NBialychRuchow, NCzarnychRuchow, Obrazki, bialyMat, bialyPat, czarnyPat, czarnyMat);
                    //cout << "mozliwe biale ruchy->" << NBialychRuchow << endl;
                    //cout << "mozliwe czarne ruchy->" << NCzarnychRuchow << endl;
                    //cout << "bialy mat->" << bialyMat << endl;
                    //cout << "czarny mat->" << czarnyMat << endl;
                    if (bialyMat == true && NCzarnychRuchow==0)
                    {
                        cout << "biale wygrywaja";
                        koniec = true;
                    }
                    else if (czarnyMat == true && NBialychRuchow == 0)
                    {
                        cout << "czarne wygrywaja";
                        koniec = true;
                    }
                    else if (bialyMat == false && NCzarnychRuchow == 0 && czyjRuch%2 == 1)
                    {
                        cout << "biale daja pata! REMIS";
                        koniec = true;
                    }
                    else if (czarnyMat == false && NBialychRuchow == 0 && czyjRuch % 2 == 0)
                    {
                        cout << "czarne daja pata! REMIS";
                        koniec = true;
                    }
                    //zmiana zeby dalej grac
                    poprawnosc = false, bialyMat=false,czarnyMat=false;
                    NBialychRuchow = 0;
                    NCzarnychRuchow = 0;
                }
        }

        if (isMove) Bierki[n]->grafika.setPosition(pos.x - kursor.x, pos.y - kursor.y);

       
        // rysowanie
        window.clear();
        window.draw(sBoard);
        for (int i = 0; i < 32; i++)
        {
            window.draw(Bierki[i]->grafika);
        }
        window.display();
    }

    //czyszczenie
    listaRuchow.clear();
    delete []Bierki;
    return 0;
}