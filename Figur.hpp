#pragma once
#include <iostream>
#include <array>



class Menue
{   
    private:
    
    int cordx; 
    int cordy;
    int neuX;
    int neuY;
    char A = 'w';
    char B = 's';
    char C = '#';
        
    public:

    Menue();

    void wahlFigur();

    void wahlPos();

    void bewegeFigurA();

    void bewegeFigurB();
};