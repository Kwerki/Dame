#pragma once
#include <iostream>
#include <array>
#include <vector>
/**
 * \brief Klasse für Damebrettspiel
 * 
 * Die Klasse Damespiel erstellt ein Spiefeld mit 2d array, 
 * liest Koordinaten ein und überpüft Züge der Spielsteine auf legalität
 * Im private bereich liegen die Klassen Variablen die für das Programm benötigt werden
 * und im public die Deklarationen der Methoden und Funktionen 
 * 
 *
 * @autor Paul Hublitz
*/
class Damespiel
{
    private:
    char Brett[8][8];
    char A = 'W';
    char B = 'S';
    char C = '.';
    char D = '~';
    int altePosX; 
    int altePosY;
    int neuePosX;
    int neuePosY;
    int spielerA;
    int spielerB;
    std::vector<char> v;
    
    public:

    /**
     *Standartkonstruktor Damespiel ohne Übergabewerte
    */ 
    Damespiel(){} 


    /**
     *\brief wahl der Spielfigur
     *
     *Der Spieler wählt eine Spielfigur, diese Methode wandelt
     *Eingabe in Koordinaten für das 2D array um
     *
     *Da der Spieler Chars zum Koordinieren verwenden soll, müssen
     *diese in int umgewandelt werden, dies geschieht mit if Anweisungen 
     *@param cahr[2] dort werden eingaben des Spielers gespeichert 
     *@param altePosX dort wird die alte y-Koordinate gespeichert
     *@param altePosY dort wird die alte x-Koordinate gespeichert
     *@post Der Spieler hat eine Spielfigur ausgewählt
     *@author Paul Hublitz
    */
    void wahlFigur();


    /**
     *\brief wahl der neuen Position
     *
     *Der Spieler wählt die neue Position seiner Spielfigur, diese Methode wandelt die
     *Eingabe in Koordinaten für das 2d array um
     *
     *@see wahlFigur(), es ist das selbe Prinzip, Koordinaten werden in
     *die richtige Syntax gebracht
     *@param neuePosX dort wird die neue y-Koordinate gespeichert
     *@param neuePosY dort wird die neue x-Koordinate gespeichert
     *@post Der Spielzug ist eingelesen und kann nun überprüft werden
     *@author Paul Hublitz
    */
    void wahlPos();


    /**
     *\brief Bewegung der Figuren Weiss
     *
     *Wenn Weiss dran ist wird der Zug wird mit den Koordinaten aus @see wahlFigur und @see wahlPos
     *mit if Anweisung auf legalität überpüft, das geschieht in dem die differenz der Felder
     *untersucht wird und was auf den jeweiligen Feldern liegt
     *@param altePosX dort wird die alte y-Koordinate gespeichert
     *@param altePosY dort wird die altex-Koordinate gespeichert
     *@param neuePosX dort wird die neue y-Koordinate gespeichert
     *@param neuePosY dort wird die neue x-Koordinate gespeichert
     *@param tempY falls eine Spielfigur geschlagen wird überschreibt diese Variable das Feld
     *@param tempX falls eine Spielfigur geschlagen wird überschreibt diese Variable das Feld
     *@param Brett[x][y]akutelles Spiefeld wird abgerufen und manipuiliert
     *@post Das Spiefeld ist geändert 
     *@author Paul Hublitz
     */
    void bewegeFigurA();


    /**
     *\brief Bewegung der Figuren Schwarz
     *
     *Wenn Schwarz dran ist wird der Zug wird mit den Koordinaten aus @see wahlFigur und @see wahlPos
     *mit if Anweisung auf legalität überpüft, das geschieht in dem die differenz der Felder
     *untersucht wird und was auf den jeweiligen Feldern liegt
     *@param altePosX dort wird die alte y-Koordinate gespeichert
     *@param altePosY dort wird die altex-Koordinate gespeichert
     *@param neuePosX dort wird die neue y-Koordinate gespeichert
     *@param neuePosY dort wird die neue x-Koordinate gespeichert
     *@param tempY falls eine Spielfigur geschlagen wird überschreibt diese Variable das Feld
     *@param tempX falls eine Spielfigur geschlagen wird überschreibt diese Variable das Feld
     *@param Brett[x][y]akutelles Spiefeld wird abgerufen und manipuliert
     *@pre Koordinaten brauchen die richtige Syntax
     *@post Das Spiefeld ist geändert
     *@author Paul Hublitz
    */
    void bewegeFigurB();


    /**
     *\brief ausgabe Spielfeld
     * 
     *Diese Funktion iteriert mit zwei for-Schleifen durch die Felder und gibt 
     *jedes Feld als std::cout aus
     *@pre das Feld muss mit der Funktion @see erzgFeld() zuerst erzeugt werden
     *@param Brett[x][y] wird ausgegeben
     *@author Paul Hublitz
    */
    void ausgFeld();


    /**
     *\brief belgung und erzeugung Spiefeld
     *
     *Diese Funktion weißt den Feldern des des arraay jeweils einen char zu
     *die Spielsteine sind manuell zugeteilt und die leeren schwarzen und weißen Felder werden mit
     *Modulo und zwei for-Schleifen zugewiesen
     *@pre char array muss erstellt sein
     *@param Brett[8][8] das künftige Dame Spielfeld
     *@post Dem Spielfeld wurden die Belegung zugewiesen
     *@author Paul Hublitz
    */
    void erzgFeld();

    /**
     *\brief zaehlt die geschlagenen Steine
     *
     *Jede Spielfigur wird gezählt und die Anzhal minus 11 gerechnet und dann ausgeben
     *@param Brett[x][y] wird abgerufen 
     *
    */
    void gesFigur();


    /**
     *\brief überprüft ob jemand gewonnen hat
     *
     *Überprüft ob einer der Spieler keine Steine mehr auf dem Spielfeld hat,
     *wenn die Funktion true wird dann wird das Spiel abgebrochen
     *@param Brett[x][y] wird gecheckt ob noch Felder mit A oder B belegt sind
     *@return gibt false oder true wert zurück
     *@post Spielloop geht weiter oder endet
     *@author Paul Hublitz
    */
    bool endeSpiel();
    

    /**
     *\brief speicher die Züge des Spiels in einem Vector
     *
    */
    void speicherFeld();



    /**
     *@brief Spielfeld soll zurück gesetzt werde
     *
     *In dem Vektor der die Züge speichert, soll mit pop_back der letzte Eintrag 
     *gelöscht werden und dann der Vektor in das Spiefeld eingefügt werden, leider ohne Erfolg
     *@param Brett[8][8] in dieser Variable liegt das Spiefeld
     *@pre Vektor muss die Züge speichern
     *@post Spielfeld wurde bei 'j' eingabe zurückgesetzt
     *@author Paul Hublitz
    */
    //void zuruckFeld();
};
