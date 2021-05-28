#ifndef KURSOR_PW
#define KURSOR_PW

class Kursor
{
public:
    int x, y;
    Kursor(int wsp_x, int wsp_y)
    {
        x = wsp_x;
        y = wsp_y;
    }
    ~Kursor()
    {
        //destruktor
    }
};

#endif // !KURSOR_PW