#include "Player.h"
#include "Batsman.h"
#include "Bowler.h"

int main() {
    char name[] = "Babar Azam";
    int scorePerMatch[3] = { 0, 27, 49 };
    int matches = 3;

    // Player object
    cout << "P1:" << endl;
    Player P1(name, matches);
    P1.Display();
    cout << endl;

    // Copy constructor for Player
    cout << "P2: (Copy Constructor)" << endl;
    Player P2(P1);
    P2.Display();
    cout << endl;

    // Batsman object
    cout << "Bat1:" << endl;
    Batsman Bat1(name, matches, scorePerMatch);
    Bat1.Display();

    // Copy constructor for Batsman
    cout << "Bat2: (Copy Constructor)" << endl;
    Batsman Bat2(Bat1);
    Bat2.Display();

    // Bowler object
    cout << "Bol1:" << endl;
    Bowler Bol1(name, matches, 50);
    Bol1.Display();

    // Copy constructor for Bowler
    cout << "Bol2: (Copy Constructor)" << endl;
    Bowler Bol2(Bol1);
    Bol2.Display();

    return 0;
}