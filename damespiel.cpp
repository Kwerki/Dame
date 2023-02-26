#include "Damespiel.hpp"


void Damespiel::erzgFeld() 
{

    Brett[0][0] = A; Brett[0][2] = A; Brett[0][4] = A; Brett[0][6] = A; 
    Brett[1][1] = A; Brett[1][3] = A; Brett[1][5] = A; Brett[1][7] = A; 
    Brett[2][0] = A; Brett[2][2] = A; Brett[2][4] = A; Brett[2][6] = A; 
    
    
    
    Brett[5][1] = B; Brett[5][3] = B; Brett[5][5] = B; Brett[5][7] = B; 
    Brett[6][0] = B; Brett[6][2] = B; Brett[6][4] = B; Brett[6][6] = B; 
    Brett[7][1] = B; Brett[7][3] = B; Brett[7][5] = B; Brett[7][7] = B; //Spielsteine
    
    
    for(int x = 0; x < 8; x++)
        {
            for(int y = 0; y < 8; y++)
            {
                if(Brett[x][y] != A && Brett[x][y] != B) 
                {
                    if(((x + y) % 2) == 0) // modulo belegt felder mit schwarz weiss
                    {
                        Brett[x][y] = C;
                    }
                    else
                    {
                        Brett[x][y] = D;
                    }
                }

            
            }
        }
}

void Damespiel::ausgFeld() 
{
    std::cout << "    A  B  C  D  E  F  G  H" << std::endl;
    std::cout << "___________________________" << std::endl;
        for(int x = 0; x < 8; x++)
        {   
            std::cout << x + 1 << "| "; // weil ab 0 zählt
            
            for(int y = 0; y < 8; y++)
            {
                
                std::cout <<" " << Brett[x][y] << " ";   
            }    
            std::cout << std::endl;
            
        }
    std::cout << "___________________________" << std::endl;
    std::cout << "                           " << std::endl;
    std::cout << "    A  B  C  D  E  F  G  H" << std::endl;
    
}

void Damespiel::wahlFigur() 
{
    char pos[2];
    do{
        std::cout << "von: ";
        std::cin >> pos[1] >> pos[0];

        if(pos[1] == 'a' || pos[1] == 'A' ) // if else für zwei bedingungen 
        {
            altePosY = 0;
        }
        else if(pos[1] == 'b' || pos[1] == 'B')
        {
            altePosY = 1;
        }
        else if(pos[1] == 'c' || pos[1] == 'C')
        {
            altePosY = 2;
        }
        else if(pos[1] == 'd' || pos[1] == 'D')
        {
            altePosY = 3;
        }
        else if(pos[1] == 'e' || pos[1] == 'E')
        {
            altePosY = 4;
        }
        else if(pos[1] == 'f' || pos[1] == 'F')
        {
            altePosY = 5;
        }
        else if(pos[1] == 'g' || pos[1] == 'G')
        {
            altePosY = 6;
        }
        else if(pos[1] == 'h' || pos[1] == 'H')
        {
            altePosY = 7;
        }
        else
        {
            altePosY= 8;
        }

        if(pos[0] == '1')
        {
            altePosX = 0;
        }
        else if(pos[0] == '2')
        {
            altePosX = 1;
        }
        else if(pos[0] == '3')
        {
            altePosX = 2;
        }
        else if(pos[0] == '4')
        {
            altePosX = 3;
        }
        else if(pos[0] == '5')
        {
            altePosX = 4;
        }
        else if(pos[0] == '6')
        {
            altePosX = 5;
        }
        else if(pos[0] == '7')
        {
            altePosX = 6;
        }
        else if(pos[0] == '8')
        {
            altePosX = 7;
        }
        else
        {
            altePosX = 8;
        }
        if(altePosY == 8 || altePosX == 8)
        {
            std::cout << "Dort ist kein Feld, bitte erneut ziehen " << std::endl;
        }
    }while(altePosX == 8 || altePosY == 8 );
    
}

void Damespiel::wahlPos() 
{
    char pos[2];
    do{
        std::cout << "nach: ";
        std::cin >> pos[1] >> pos[0];

        if(pos[1] == 'a' || pos[1] == 'A' )
        {
            neuePosY = 0;
        }
        else if(pos[1] == 'b' || pos[1] == 'B')
        {
            neuePosY = 1;
        }
        else if(pos[1] == 'c' || pos[1] == 'C')
        {
            neuePosY = 2;
        }
        else if(pos[1] == 'd' || pos[1] == 'D')
        {
            neuePosY = 3;
        }
        else if(pos[1] == 'e' || pos[1] == 'E')
        {
            neuePosY = 4;
        }
        else if(pos[1] == 'f' || pos[1] == 'F')
        {
            neuePosY = 5;
        }
        else if(pos[1] == 'g' || pos[1] == 'G')
        {
            neuePosY = 6;
        }
        else if(pos[1] == 'h' || pos[1] == 'H')
        {
            neuePosY = 7;
        }
        else
        {
            neuePosY = 8;        
        }

        if(pos[0] == '1')
        {
            neuePosX = 0;
        }
        else if(pos[0] == '2')
        {
            neuePosX = 1;
        }
        else if(pos[0] == '3')
        {
            neuePosX = 2;
        }
        else if(pos[0] == '4')
        {
            neuePosX = 3;
        }
        else if(pos[0] == '5')
        {
            neuePosX = 4;
        }
        else if(pos[0] == '6')
        {
            neuePosX = 5;
        }
        else if(pos[0] == '7')
        {
            neuePosX = 6;
        }
        else if(pos[0] == '8')
        {
            neuePosX = 7;
        }
        else
        {
            neuePosX = 8;
        }
        if(neuePosY == 8 || neuePosX == 8)
        {
            std::cout << "Dort ist kein Feld, bitte erneut ziehen " << std::endl;
        }
    }while(neuePosY == 8 || neuePosX == 8 );
    
}

void Damespiel::bewegeFigurA() 
{
    int abbruch;
    do{
        std::cout << "Weiss zieht ";
        this->wahlFigur();  //Einfügen der gewählten koordinaten
        this->wahlPos();

        int tempY;
        int tempX;
        abbruch = 0;
        
        if(Brett[altePosX][altePosY] == A) 
        {
            if((neuePosX - altePosX == 1 && (altePosY - neuePosY == 1 || neuePosY - altePosY == 1)) && (Brett[neuePosX][neuePosY] == C)) // normaler sprung weiss
            {
                Brett[altePosX][altePosY] = C;  //Felder werden überschrieben
                Brett[neuePosX][neuePosY] = A;
            }
            else if((neuePosX - altePosX == 2 && (altePosY - neuePosY == 2 || neuePosY - altePosY == 2)) && (Brett[neuePosX][neuePosY] == C)) //sprung um stein zu schlagen
            {
                if(altePosY < neuePosY)
                {
                    tempY = neuePosY; 
                    tempY--;            // Temporäres Feld wird berechnet Y wird berechnet
                    tempX = neuePosX;
                    tempX--;            // Temporäres Feld wird berechnet X wird berechnet
                }
                else if(altePosY > neuePosY)
                {
                    tempY = neuePosY;
                    tempY++;            // Temporäres Feld wird berechnet Y wird berechnet
                    tempX = neuePosX;
                    tempX--;            // Temporäres Feld wird berechnet X wird berechnet
                }
                if(Brett[tempX][tempY] == B)
                {   
                    Brett[tempX][tempY] = C;        //Felder werden überschrieben
                    Brett[neuePosX][neuePosY] = A;
                    Brett[altePosX][altePosY] = C;
                }
                else
                { 
                    std::cout << "Zug ist ungueltig, bitte erneut Ziehen " << std::endl;
                    abbruch = 1;
                } 
                
            }
            else 
            {
                std::cout << "Zug ist ungueltig, bitte erneut Ziehen " << std::endl;
               abbruch = 1;
            } 
        }    
        else 
        {
            std::cout << "Bitte nur ihren eigenen Stein ziehen " << std::endl;
            abbruch = 1;
        } 
    }while(abbruch == 1);
    
}

void Damespiel::bewegeFigurB() 
{
    int abbruch;
    do{
        std::cout << "Schwarz zieht ";
        this->wahlFigur();  //Einfügen der gewählten koordinaten
        this->wahlPos();

        int tempY;
        int tempX;
        abbruch = 0;
        
        if(Brett[altePosX][altePosY] == B) 
        {
            if((altePosX - neuePosX == 1 && (altePosY - neuePosY == 1 || neuePosY - altePosY == 1)) && (Brett[neuePosX][neuePosY] == C)) // normaler sprung schwarz
            {
                Brett[altePosX][altePosY] = C;
                Brett[neuePosX][neuePosY] = B;
            }
            else if((altePosX - neuePosX == 2 && (altePosY - neuePosY == 2 || neuePosY - altePosY == 2)) && (Brett[neuePosX][neuePosY] == C)) // sprung um stein zu schlagen
            {
                if(altePosY < neuePosY)
                {
                    tempY = neuePosY;
                    tempY--;                 // Temporäres Feld wird berechnet Y wird berechnet
                    tempX = neuePosX;
                    tempX++;                // Temporäres Feld wird berechnet X wird berechnet
                }
                else if(altePosY > neuePosY)
                {
                    tempY = neuePosY;
                    tempY++;                // Temporäres Feld wird berechnet Y wird berechnet
                    tempX = neuePosX;
                    tempX++;                // Temporäres Feld wird berechnet X wird berechnet
                }
                if(Brett[tempX][tempY] == A)
                {
                    Brett[tempX][tempY] = C;
                    Brett[neuePosX][neuePosY] = B;
                    Brett[altePosX][altePosY] = C;
                }
                else 
                {
                    std::cout << "Zug ist ungueltig, bitte erneut Ziehen " << std::endl;
                    abbruch = 1;
                } 
            }
            else 
            {
                std::cout << "Zug ist ungueltig, bitte erneut Ziehen "<< std::endl;
                abbruch = 1;
            } 
        }    
        else 
        {
            std::cout << "Bitte nur ihren eigenen Stein ziehen "<< std::endl;
            abbruch = 1;
        } 
    }while(abbruch == 1);
}

void Damespiel::gesFigur() 
{
   int j = 0; 
   int i = 0;
   int a;
   int b;

    for(int x = 0; x < 8; x++)
    {
        for(int y = 0; y < 8; y++)
        {
            if(Brett[x][y] == A)        //zählt die vorhanden spielsteine und zieht sie von 11 ab
            {
                a = 11 - i++; 
                
            }
            if(Brett[x][y] == B)
            {
                b = 11 - j++;
                
            }
        }
    }
    std::cout << "Geschlagene Spielsteine von Weiss " << a << std::endl;
    std::cout << "Geschlagene Spielsteine von Schwarz " << b << std::endl;

    
}

void Damespiel::speicherFeld() 
{
    for (int x = 0; x < 8; x++)
    {
	    for (int y = 0; y < 8; y++)
	    { 
            v.push_back(Brett[x][y]); //  variabler vektor
        }
    }
}

/*
void Damespiel::zuruckFeld()
{
    char Frage;
    std::cin >> Frage;
    if(Frage == 'J')
    {
        v.pop_back();
    
        for (int x = 0; x < 8; x++)
        {
	        for (int y = 0; y < 8; y++)
            {
            Brett[x][y] = v;
            }
        }
    }
    else
    {

    }
}
*/

bool Damespiel::endeSpiel() 
{
   int j = 0; 
   int i = 0;
    

    for(int x = 0; x < 8; x++)
    {
        for(int y = 0; y < 8; y++)
        {
            if(Brett[x][y] == A)
            {
                spielerA = 11 - i++;
                
            }
            if(Brett[x][y] == B)
            {
                spielerB = 11 - j++;
                
            }
            if(spielerA == 12 || spielerB == 12) // wein ein Spieler 12 erreicht, heisst das er hat keine Steine mehr und das Spiel wird beendet
            {
                return false;
            }
            
        }
    }
  return true;  
} 