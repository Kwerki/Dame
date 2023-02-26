#include <iostream>
#include <array>
#include "Figur.hpp"
#include "Spielfeld.hpp"


Menue::Menue(){} // Konstruktor

void Menue::wahlFigur() // Wahl des Spielsteins
{
    
    char pos[2];

    start:
    
    std::cin >> pos[0] >> pos[1];

    if(pos[0] == 'a' || pos[0] == 'A' )
    {
        cordx = 0;
    }
    else if(pos[0] == 'b' || pos[0] == 'B')
    {
        cordx = 1;
    }
    else if(pos[0] == 'c' || pos[0] == 'C')
    {
        cordx = 2;
    }
    else if(pos[0] == 'd' || pos[0] == 'D')
    {
        cordx = 3;
    }
    else if(pos[0] == 'e' || pos[0] == 'E')
    {
        cordx = 4;
    }
    else if(pos[0] == 'f' || pos[0] == 'F')
    {
        cordx = 5;
    }
    else if(pos[0] == 'g' || pos[0] == 'G')
    {
        cordx = 6;
    }
    else if(pos[0] == 'h' || pos[0] == 'H')
    {
        cordx = 7;
    }
    else
    {
        std::cout << "Falsche Eingabe, bitte erneut eingeben: " << std::endl;
        goto start;
    }

    if(pos[1] == '1')
    {
        cordy = 0;
    }
    else if(pos[1] == '2')
    {
        cordy = 1;
    }
    else if(pos[1] == '3')
    {
        cordy = 2;
    }
    else if(pos[1] == '4')
    {
        cordy = 3;
    }
    else if(pos[1] == '5')
    {
        cordy = 4;
    }
    else if(pos[1] == '6')
    {
        cordy = 5;
    }
    else if(pos[1] == '7')
    {
        cordy = 6;
    }
    else if(pos[1] == '8')
    {
        cordy = 7;
    }
    else
    {
        std::cout << "Falsche Eingabe, bitte erneut eingeben: " << std::endl;
        goto start;
    }
    bewegeFigurA();
}

void Menue::wahlPos() // Wahl der neuen Position des Spielsteins
{
    
    char pos[2];
    std::cout << "Wohin wollen Sie ihren Stein setzten" << std::endl;
    
    start:
    std::cin >> pos[0] >> pos[1];

    if(pos[0] == 'a' || pos[0] == 'A' )
    {
        neuX = 0;
    }
    else if(pos[0] == 'b' || pos[0] == 'B')
    {
        neuX = 1;
    }
    else if(pos[0] == 'c' || pos[0] == 'C')
    {
        neuX = 2;
    }
    else if(pos[0] == 'd' || pos[0] == 'D')
    {
        neuX = 3;
    }
    else if(pos[0] == 'e' || pos[0] == 'E')
    {
        neuX = 4;
    }
    else if(pos[0] == 'f' || pos[0] == 'F')
    {
        neuX = 5;
    }
    else if(pos[0] == 'g' || pos[0] == 'G')
    {
        neuX = 6;
    }
    else if(pos[0] == 'h' || pos[0] == 'H')
    {
        neuX = 7;
    }
    else
    {
        std::cout << "Falsche Eingabe, bitte erneut eingeben: " << std::endl;
        goto start;
    }

    if(pos[1] == '1')
    {
        neuY = 0;
    }
    else if(pos[1] == '2')
    {
        neuY = 1;
    }
    else if(pos[1] == '3')
    {
        neuY = 2;
    }
    else if(pos[1] == '4')
    {
        neuY = 3;
    }
    else if(pos[1] == '5')
    {
        neuY = 4;
    }
    else if(pos[1] == '6')
    {
        neuY = 5;
    }
    else if(pos[1] == '7')
    {
        neuY = 6;
    }
    else if(pos[1] == '8')
    {
        neuY = 7;
    }
    else
    {
        std::cout << "Falsche Eingabe, bitte erneut eingeben: " << std::endl;
        goto start;
    }
    bewegeFigurA();
}

void Menue::bewegeFigurA() // Überprüfung Zug auf legalität
{
    int altePosX = cordx;
    int altePosY = cordy;

    int neuePosX = neuX;
    int neuePosY = neuY;

    int tempY;
    int tempX;

    if(damefeld.getFeld(altePosX, altePosY) == A) 
    {
        if(neuePosX - altePosX == 1 && (altePosY - neuePosY == 1 || neuePosY - altePosY == 1)) //überprüfung legalität
        {
            if(damefeld.getFeld(neuePosX, neuePosY) == C)
            {
                damefeld.setFeld(altePosX, altePosY ,C);
                damefeld.setFeld(neuePosX, neuePosY, A);
                    
            }
            if(damefeld.getFeld(neuePosX, neuePosY) == B) 
            {
                                                    
                if(altePosY < neuePosY)
                {
                    tempY = neuePosY;
                    tempY++;
                    tempX = neuePosX;
                    tempX++;
                }
                else if(altePosY > neuePosY)
                {
                    tempY = neuePosY;
                    tempY--;
                    tempX = neuePosX;
                    tempX++;
                }
                if(damefeld.getFeld(tempX, tempY) != B) 
                {
                    damefeld.setFeld(tempX, tempY, A);
                    damefeld.setFeld(neuePosX, neuePosY, C);
                    damefeld.setFeld(altePosX, altePosY, C);

                }
                    
            }
        }
    }    
    else // falls Zug Ungültig ist
    {
    damefeld.setFeld(altePosX, altePosY, A);
    std::cout << "Zug ist ungültig" << std::endl;
    }
    
}

void Menue::bewegeFigurB() // Überprüfung Zug auf legalität
{
    int altePosX = cordx;
    int altePosY = cordy;

    int neuePosX = neuX;
    int neuePosY = neuY;

    int tempY;
    int tempX;

    if(damefeld.getFeld(altePosX, altePosY) == B) 
    {
        if(altePosX - neuePosX == 1 && (altePosY - neuePosY == 1 || neuePosY - altePosY == 1)) //überprüfung legalität
        {
            if(damefeld.getFeld(neuePosX, neuePosY) == C)
            {
                damefeld.setFeld(altePosX, altePosY, C);
                damefeld.setFeld(neuePosX, neuePosY, B);
                    
            }
            if(damefeld.getFeld(neuePosX, neuePosY) == A) 
            {
                                                    
                if(altePosY < neuePosY)
                {
                    tempY = neuePosY;
                    tempY++;
                    tempX = neuePosX;
                    tempX++;
                }
                else if(altePosY > neuePosY)
                {
                    tempY = neuePosY;
                    tempY--;
                    tempX = neuePosX;
                    tempX++;
                }
                if(damefeld.getFeld(tempX, tempY) != A) 
                {
                    damefeld.setFeld(tempX, tempY, B);
                    damefeld.setFeld(neuePosX, neuePosY, C);
                    damefeld.setFeld(altePosX, altePosY, C);

                }
                    
            }
        }
    }    
    else // falls Zug Ungültig ist
    {
    damefeld.setFeld(altePosX, altePosY, A);
    std::cout << "Zug ist ungültig" << std::endl;
    }
    
}




