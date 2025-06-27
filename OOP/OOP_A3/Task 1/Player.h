#pragma once
#include <iostream>
using namespace std;

// Class representing a Player
class Player {
protected:
    char* Name;     // Name of the player
    int Matches;    // Number of matches played

public:
    // Constructors and destructor
    Player(const char* = nullptr, int = 0);
    Player(const Player&);
    ~Player();

    // Member function to display player information
    void Display();
};