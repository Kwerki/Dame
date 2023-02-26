#include "Damespiel.hpp"


int main()
{
    Damespiel damespiel;
    damespiel.erzgFeld();
    damespiel.ausgFeld();
    std::cout << "Zuerst zieht Weiss." << std::endl;
    
    do{
    damespiel.bewegeFigurA();
    damespiel.speicherFeld();
    damespiel.ausgFeld();
    damespiel.gesFigur();
    damespiel.bewegeFigurB();
    damespiel.speicherFeld();
    damespiel.ausgFeld();
    damespiel.gesFigur();
    
    }while(damespiel.endeSpiel());
}